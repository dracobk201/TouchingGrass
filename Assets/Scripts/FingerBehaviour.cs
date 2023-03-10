using ScriptableObjectArchitecture;
using UnityEngine;

public class FingerBehaviour : MonoBehaviour
{
    [SerializeField] private BoolReference isGameOver = default;

    [SerializeField] private LaneEnum laneNumber = default;
    [SerializeField] private GameObjectCollection objectPoolCollection = default;

    [SerializeField] private IntReference centimetersInGround = default;
    [SerializeField] private FloatReference fallDownStep = default;
    [SerializeField] private FloatReference timeToFallDown = default;
    [SerializeField] private RectReference cameraRectViewport = default;
    [SerializeField] private ShowLaneGameEvent laneRequestCompleted = default;

    [SerializeField] private GameObject nailPrefab;
    [SerializeField] private GameObject cameraPrefab;
    [SerializeField] private GameObject cameraSeparatorPrefab;

    public bool isFingerStuck;
    private float actualTime;

    private void Start()
    {
        RestartLane();
    }

    public void RestartLane()
    {
        actualTime = 0;
        isFingerStuck = false;
        centimetersInGround.Value = 0;
        GameObject nail = Instantiate(nailPrefab, transform);
        Vector3 realPosition = nail.transform.localPosition;
        realPosition.x = 0;
        nail.transform.localPosition = realPosition;
        objectPoolCollection[0] = nail;

        GameObject camera = Instantiate(cameraPrefab, nail.transform);
        camera.GetComponent<Camera>().rect = cameraRectViewport.Value;

        GameObject separator = Instantiate(cameraSeparatorPrefab, transform);
    }

    private void Update()
    {
        if (isGameOver.Value)
        {
            return;
        }

        actualTime += Time.deltaTime;
        if (actualTime >= timeToFallDown.Value && !isFingerStuck)
        {
            actualTime = 0;
            FallDown();
        }
    }

    private void FallDown()
    {
        for (int i = 0; i < objectPoolCollection.Count; i++)
        {
            if (objectPoolCollection[i].activeInHierarchy)
            {
                Vector3 newPosition = objectPoolCollection[i].transform.position;
                newPosition.y -= fallDownStep.Value;
                if (CheckCollision(newPosition) && i == 0)
                {
                    isFingerStuck = true;
                    //TODO: Finish the logic for this case
                    SendLaneRequest();
                    return;
                }
                else
                {
                    objectPoolCollection[i].transform.position = newPosition;
                    centimetersInGround.Value++;
                }
            }
        }
        AddSkin();
    }

    public void AddSkin()
    {
        if (isFingerStuck)
        {
            return;
        }
        var initialPosition = Vector3.zero;

        for (int i = 0; i < objectPoolCollection.Count; i++)
        {
            if (!objectPoolCollection[i].activeInHierarchy)
            {
                initialPosition = objectPoolCollection[i].transform.localPosition;
                initialPosition.x = 0;
                objectPoolCollection[i].transform.localPosition = initialPosition;
                objectPoolCollection[i].SetActive(true);
                break;
            }
        }
    }

    private bool CheckCollision(Vector3 positionToCheck)
    {
        bool isColliding = false;
        //TODO: Raycast to the next tile
        if (Random.value <= 0.2f)
        {
            isColliding = true;
        }
        return isColliding;
    }

    private void SendLaneRequest()
    {
        ButtonType targetButtonType = ButtonType.None;
        int randomeButtonType = Random.Range(0, 3);
        int targetNumberofTaps = 0;
        float targetTimeOnLongPress = 0;
        if (randomeButtonType == 0)
        {
            targetButtonType = ButtonType.SingleTap;
        }
        else if (randomeButtonType == 1)
        {
            targetButtonType = ButtonType.LongPress;
            var calculatedValue = centimetersInGround.Value * 0.1f;
            targetTimeOnLongPress = Mathf.Clamp(calculatedValue, 0.1f, Mathf.Infinity);
        }
        else if (randomeButtonType == 2)
        {
            targetButtonType = ButtonType.RepeatedTap;
            var calculatedValue = centimetersInGround.Value * 0.25f;
            targetNumberofTaps = (int)Mathf.Clamp(calculatedValue, 1, Mathf.Infinity);
        }

        LaneRequest requestCompleted = new()
        {
            targetLaneNumber = laneNumber,
            buttonType = targetButtonType,
            timeOnLongPress = targetTimeOnLongPress,
            numberOfTaps = targetNumberofTaps
        };

        laneRequestCompleted.Raise(requestCompleted);
    }

    public void ReleaseLane(LaneRequest laneConfiguration)
    {
        if (laneConfiguration.targetLaneNumber != laneNumber)
        {
            return;
        }
        isFingerStuck = false;
    }
}
