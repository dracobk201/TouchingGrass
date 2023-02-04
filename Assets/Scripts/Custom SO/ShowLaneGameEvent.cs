using ScriptableObjectArchitecture;
using UnityEngine;
using UnityEngine.Playables;

[System.Serializable]
[CreateAssetMenu(
        fileName = "ShowLaneGameEvent.asset",
        menuName = SOArchitecture_Utility.GAME_EVENT + "TouchingGrass/ShowLane",
        order = SOArchitecture_Utility.ASSET_MENU_ORDER_EVENTS + 2)]
public sealed class ShowLaneGameEvent : GameEventBase<LaneRequest>
{
}