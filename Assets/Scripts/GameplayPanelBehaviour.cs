using ScriptableObjectArchitecture;
using TMPro;
using UnityEngine;

public class GameplayPanelBehaviour : MonoBehaviour
{
    [SerializeField] private TMP_Text remainingTimeText = default;

    [SerializeField] private FloatReference actualGameTime = default;
    [SerializeField] private FloatReference gameTimer = default;

    private void Update()
    {
        float remainingTime = gameTimer.Value - actualGameTime.Value;
        remainingTimeText.text = $"{remainingTime.ToString("F1")} s";
    }

}
