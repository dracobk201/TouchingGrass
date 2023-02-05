using UnityEngine;

namespace ScriptableObjectArchitecture
{
    [System.Serializable]
    [CreateAssetMenu(
        fileName = "RectGameEvent.asset",
        menuName = SOArchitecture_Utility.GAME_EVENT + "Structs/Rect",
        order = SOArchitecture_Utility.ASSET_MENU_ORDER_EVENTS + 13)]
    public sealed class RectGameEvent : GameEventBase<Rect>
    {
    }
}