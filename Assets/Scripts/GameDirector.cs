using ScriptableObjectArchitecture;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameDirector : MonoBehaviour
{
    [SerializeField] private BoolReference isGameOver = default;
    [SerializeField] private FloatReference actualGameTime = default;
    [SerializeField] private FloatReference gameTimer = default;
    [SerializeField] private GameEvent gameOver = default;

    [SerializeField] private IntReference bestScore = default;
    [SerializeField] private List<IntReference> deepFromLanes = default;

    private void Start()
    {
        isGameOver.Value = true;        
    }

    public void StartGame()
    {
        StartCoroutine(CheckTheTime());
    }

    private IEnumerator CheckTheTime()
    {
        isGameOver.Value = false;
        while (!isGameOver.Value)
        {
            yield return null;
            actualGameTime.Value += Time.deltaTime;

            if (actualGameTime.Value >= gameTimer.Value)
            {
                isGameOver.Value = true;
                actualGameTime.Value = 0;
                CheckPoints();
                gameOver.Raise();
            }
        }
    }

    private void CheckPoints()
    {
        var points = 0;
        foreach (var lane in deepFromLanes)
        {
            points+= lane.Value;
        }
        bestScore.Value = points;
    }
}
