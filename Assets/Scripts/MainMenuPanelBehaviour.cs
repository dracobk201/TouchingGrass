using ScriptableObjectArchitecture;
using TMPro;
using UnityEngine;

public class MainMenuPanelBehaviour : MonoBehaviour
{
    [SerializeField] private GameEvent startGame = default;
    [SerializeField] private CanvasGroup canvasGroup = default;

    [SerializeField] private TMP_Text gameStatusLabel = default;
    [SerializeField] private TMP_Text bestScoreText = default;
    [SerializeField] private IntReference bestScore = default;

    private void Start()
    {
        gameStatusLabel.text = "Start touching!";
        bestScoreText.text = $"{bestScore.Value} cm";
    }

    public void StartGameButton()
    {
        canvasGroup.alpha = 0;
        canvasGroup.interactable = false;
        canvasGroup.blocksRaycasts= false;
        startGame.Raise();
    }

    public void ShowMainMenu()
    {
        gameStatusLabel.text = "Good Grass!";
        bestScoreText.text = $"{bestScore.Value} cm";
        canvasGroup.alpha = 1;
        canvasGroup.interactable = true;
        canvasGroup.blocksRaycasts = true;
    }
}
