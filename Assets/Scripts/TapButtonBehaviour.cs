using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TapButtonBehaviour : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private LaneEnum laneNumber;
    [SerializeField] private Button buttonReference;
    [SerializeField] private Image buttonImage;
    [SerializeField] private TMP_Text buttonLabel;
    [SerializeField] private Animator laneAnimator;
    [SerializeField] private ShowLaneGameEvent laneRequestCompleted;

    private bool buttonPressed;
    private int actualNumberOfTaps;
    private int expectedNumberOfTaps;
    private float actualTimeOnLongPress;
    private float expectedTimeOnLongPress;
    public ButtonType requestedButtonType;

    private void Start()
    {
        ButtonActivation(false);
    }

    public void SetupButton(LaneRequest laneConfiguration)
    {
        if (laneConfiguration.targetLaneNumber != laneNumber)
        {
            return;
        }
        requestedButtonType = laneConfiguration.buttonType;
        
        ButtonActivation(true);

        switch (laneConfiguration.buttonType)
        {
            case ButtonType.SingleTap:
                buttonReference.onClick.AddListener(() => { DoSimpleTap(); });
                buttonLabel.text = string.Empty;
                break;
            case ButtonType.LongPress:
                expectedTimeOnLongPress = laneConfiguration.timeOnLongPress;
                buttonLabel.text = $"{expectedTimeOnLongPress} s";
                break;
            case ButtonType.RepeatedTap:
                buttonReference.onClick.AddListener(CheckMultipleTaps);
                expectedNumberOfTaps = laneConfiguration.numberOfTaps;
                buttonLabel.text = $"{expectedNumberOfTaps}";
                break;
            case ButtonType.None:
            default:
                Debug.Log("Wrong configuration in Button Type.");
                break;
        }
    }

    private void ButtonActivation(bool isButtonGoingToBeActivated)
    {
        buttonReference.interactable = isButtonGoingToBeActivated;
        Color newAlpha = Color.white;

        if (isButtonGoingToBeActivated)
        {
            newAlpha.a = 1;
            if (requestedButtonType.Equals(ButtonType.None))
            {
                newAlpha.a = 0;
            }
            laneAnimator.SetTrigger(requestedButtonType.ToString());
        }
        else
        {
            laneAnimator.SetTrigger(ButtonType.None.ToString());
            newAlpha.a = 0;
            buttonLabel.text = string.Empty;
        }

        buttonReference.image.color = newAlpha;
        buttonReference.onClick.RemoveAllListeners();
    }

    #region SimpleTap

    private void DoSimpleTap()
    {
        Debug.Log("tap");
        RequestCompleted();
    }

    #endregion

    #region LongPress

    public void OnPointerDown(PointerEventData eventData)
    {
        buttonPressed = true;
        StopAllCoroutines();
        if (requestedButtonType.Equals(ButtonType.LongPress))
        {
            StartCoroutine(CheckingLongPress());
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        buttonPressed = false;
    }

    private IEnumerator CheckingLongPress()
    {

        while (buttonPressed)
        {
            yield return null;
            actualTimeOnLongPress += Time.deltaTime;
            float remainingTime = expectedTimeOnLongPress - actualTimeOnLongPress;
            buttonLabel.text = $"{Mathf.Clamp(remainingTime, 0, Mathf.Infinity).ToString("F2")}s";
        }

        if (actualTimeOnLongPress >= expectedTimeOnLongPress)
        {
            RequestCompleted();
        }
        else
        {
            buttonLabel.text = $"{expectedTimeOnLongPress}s";
        }
        actualTimeOnLongPress = 0;
    }

    #endregion

    #region MultipleTaps

    private void CheckMultipleTaps()
    {
        Debug.Log("multiple tap");
        actualNumberOfTaps++;
        int remainingTaps = expectedNumberOfTaps - actualNumberOfTaps;
        buttonLabel.text = $"{Mathf.Clamp(remainingTaps, 0, Mathf.Infinity)}";
        if (actualNumberOfTaps >= expectedNumberOfTaps)
        {
            RequestCompleted();
            actualNumberOfTaps = 0;
        }
    }

    #endregion

    private void RequestCompleted()
    {
        LaneRequest requestCompleted = new()
        {
            targetLaneNumber = laneNumber,
            buttonType = requestedButtonType
        };

        laneRequestCompleted.Raise(requestCompleted);
        ButtonActivation(false);
    }

    public void RestartLane()
    {
        ButtonActivation(false);
    }
}
