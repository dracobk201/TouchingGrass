using ScriptableObjectArchitecture;
using TMPro;
using UnityEngine;

public class LaneDeepCounterBehaviour : MonoBehaviour
{
    [SerializeField] private IntReference centimetersInGround = default;
    [SerializeField] private TMP_Text counterLabel;

    private float actualTime;

    private void Update()
    {
        actualTime += Time.deltaTime;
        if (actualTime >= 0.3f)
        {
            counterLabel.text = centimetersInGround.Value.ToString();
            actualTime = 0f;
        }
    }

}
