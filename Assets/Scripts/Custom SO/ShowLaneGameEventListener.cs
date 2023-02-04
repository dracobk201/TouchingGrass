using ScriptableObjectArchitecture;
using UnityEngine;
using UnityEngine.Playables;

[AddComponentMenu(SOArchitecture_Utility.EVENT_LISTENER_SUBMENU + "TouchingGrass/ShowLane Event Listener")]
public sealed class ShowLaneGameEventListener : BaseGameEventListener<LaneRequest, ShowLaneGameEvent, ShowLaneEvent>
{
}
