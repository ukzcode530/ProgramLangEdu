using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class new_scrtest : MonoBehaviour
{
    private scrtest myCharacter;

    void Start()
    {
        myCharacter = new scrtest();
        myCharacter.Name = "Bob";
        myCharacter.Age = 30;
        myCharacter.Gender = "Male";
        myCharacter.Level = 2;
        myCharacter.Health = 75.0f;

        myCharacter.Attack(5f);
        myCharacter.Defend(10f);
        myCharacter.LevelUp(3);

        Debug.Log($"Name: {myCharacter.Name}");
        Debug.Log($"Age: {myCharacter.Age}");
        Debug.Log($"Gender: {myCharacter.Gender}");
        Debug.Log($"Level: {myCharacter.Level}");
        Debug.Log($"Health: {myCharacter.Health}");
    }

}
