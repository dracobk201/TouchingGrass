using ScriptableObjectArchitecture;
using UnityEngine;

public class CreditsPanelBehaviour : MonoBehaviour
{
    [SerializeField] private GameEvent showMainMenu = default;
    [SerializeField] private CanvasGroup canvasGroup = default;

    private void Start()
    {
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, false);
    }

    public void ShowCredits()
    {
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, true);
    }

    public void ShowMainMenu()
    {
        showMainMenu.Raise();
        canvasGroup = Utils.ShowCanvasGroup(canvasGroup, false);
    }
}
