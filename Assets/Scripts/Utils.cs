using UnityEngine;

public class Utils
{
    public static CanvasGroup ShowCanvasGroup(CanvasGroup targetCanvasGroup, bool toShow)
    {
        if (toShow)
        {
            targetCanvasGroup.alpha = 1;
        }
        else
        {
            targetCanvasGroup.alpha = 0;
        }
        targetCanvasGroup.interactable = toShow;
        targetCanvasGroup.blocksRaycasts = toShow;
        return targetCanvasGroup;
    }
}
