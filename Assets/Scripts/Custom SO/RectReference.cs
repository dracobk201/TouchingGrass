using UnityEngine;

namespace ScriptableObjectArchitecture
{
    [System.Serializable]
    public sealed class RectReference : BaseReference<Rect, RectVariable>
    {
        public RectReference() : base() { }
        public RectReference(Rect value) : base(value) { }
    }
}