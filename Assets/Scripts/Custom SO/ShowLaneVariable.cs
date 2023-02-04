using ScriptableObjectArchitecture;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Playables;

[System.Serializable]
public class ShowLaneEvent : UnityEvent<LaneRequest> { }
[CreateAssetMenu(
        fileName = "LaneConfigurationVariable.asset",
        menuName = SOArchitecture_Utility.VARIABLE_SUBMENU + "TouchingGrass/LaneConfigurationVariable")]
public sealed class LaneConfigurationVariable : BaseVariable<LaneRequest, ShowLaneEvent>
{
}
