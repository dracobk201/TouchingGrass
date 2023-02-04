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
    [SerializeField] private ShowLaneGameEvent laneRequestCompleted;

    [SerializeField] private Sprite simpleTapSprite;
    [SerializeField] private Sprite longPressSprite;
    [SerializeField] private Sprite multipleTapSprite;
    [SerializeField] private Sprite nonSprite;

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
        ButtonActivation(true);

        requestedButtonType = laneConfiguration.buttonType;
        switch (laneConfiguration.buttonType)
        {
            case ButtonType.Tap:
                buttonReference.onClick.AddListener(() => { DoSimpleTap(); });
                break;
            case ButtonType.LongPress:
                expectedTimeOnLongPress = laneConfiguration.timeOnLongPress;
                buttonLabel.text = $"{(int)expectedTimeOnLongPress}s";
                break;
            case ButtonType.RepeatedTap:
                expectedNumberOfTaps = laneConfiguration.numberOfTaps;
                buttonLabel.text = $"{(int)expectedNumberOfTaps}";
                buttonReference.onClick.AddListener(CheckMultipleTaps);
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
            switch (requestedButtonType)
            {
                case ButtonType.Tap:
                    buttonReference.image.sprite = simpleTapSprite;
                    break;
                case ButtonType.LongPress:
                    buttonReference.image.sprite = longPressSprite;
                    break;
                case ButtonType.RepeatedTap:
                    buttonReference.image.sprite = multipleTapSprite;
                    buttonLabel.text = $"{(int)expectedTimeOnLongPress}s";

                    break;
                case ButtonType.None:
                default:
                    buttonReference.image.sprite = nonSprite;
                    break;
            }
        }
        else
        {
            buttonReference.image.sprite = nonSprite;
            newAlpha.a = 0;
        }
        buttonReference.image.color = newAlpha;

        if (requestedButtonType.Equals(ButtonType.LongPress) || requestedButtonType.Equals(ButtonType.RepeatedTap))
        {
            buttonLabel.text = string.Empty;
        }

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
            Debug.Log(actualTimeOnLongPress);
            float remainingTime = expectedTimeOnLongPress - actualTimeOnLongPress;
            buttonLabel.text = $"{Mathf.Clamp(remainingTime, 0, Mathf.Infinity).ToString("F2")}s";
        }

        if (actualTimeOnLongPress >= expectedTimeOnLongPress)
        {
            Debug.Log("yes");
            RequestCompleted();
        }
        else
        {
            Debug.Log("no");
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
        Debug.Log($"{requestedButtonType}, Done");

        LaneRequest requestCompleted = new()
        {
            targetLaneNumber = laneNumber,
            buttonType = requestedButtonType
        };

        laneRequestCompleted.Raise(requestCompleted);
        ButtonActivation(false);
    }
}
