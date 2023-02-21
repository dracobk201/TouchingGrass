using ScriptableObjectArchitecture;
using TMPro;
using UnityEngine;

public class MainMenuPanelBehaviour : MonoBehaviour
{
    [SerializeField] private GameEvent startGame = default;
    [SerializeField] private GameEvent showLeaderboardGame = default;
    [SerializeField] private GameEvent showCreditsGame = default;
    [SerializeField] private CanvasGroup canvasGroup = default;

    [SerializeField] private TMP_Text gameStatusLabel = default;
    [SerializeField] private TMP_Text bestScoreText = default;
    [SerializeField] private IntReference bestScore = default;

    private void Start()
    {
        gameStatusLabel.text = "Start touching!";
        bestScoreText.text = $"{bestScore.Value} cm";
    }

    public void PlayButton()
    {
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, false);
        startGame.Raise();
    }

    public void CreditsButton()
    {
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, false);
        showCreditsGame.Raise();
    }

    public void LeaderboardButton()
    {
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, false);
        showLeaderboardGame.Raise();
    }

    public void ShowMainMenu()
    {
        gameStatusLabel.text = "Good Grass!";
        bestScoreText.text = $"{bestScore.Value} cm";
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, true);
    }
}
