using UnityEngine;

namespace ScriptableObjectArchitecture
{
    [AddComponentMenu(SOArchitecture_Utility.EVENT_LISTENER_SUBMENU + "Rect Event Listener")]
    public sealed class RectGameEventListener : BaseGameEventListener<Rect, RectGameEvent, RectUnityEvent>
    {
    }
}