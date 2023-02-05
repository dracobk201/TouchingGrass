using UnityEngine;
using UnityEngine.Events;

namespace ScriptableObjectArchitecture
{
    [System.Serializable]
    public class RectEvent : UnityEvent<Rect> { }

    [CreateAssetMenu(
        fileName = "RectVariable.asset",
        menuName = SOArchitecture_Utility.VARIABLE_SUBMENU + "Structs/Rect",
        order = SOArchitecture_Utility.ASSET_MENU_ORDER_COLLECTIONS + 13)]
    public sealed class RectVariable : BaseVariable<Rect, RectEvent>
    {
    }
}