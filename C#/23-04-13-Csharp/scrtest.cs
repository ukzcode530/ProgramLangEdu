using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class scrtest : MonoBehaviour
{
    private string name;
    private int age;
    private string gender;
    private int level;
    private float health;

    void Start()
    {
        name = "Alice";
        age = 25;
        gender = "Female";
        level = 1;
        health = 100.0f;

        Attack(0f);
        Defend(0f);
        LevelUp(0);

        Invoke("Char_Info_print", 3f); // 3초 뒤에 Char_Info_print 함수 실행
    }

    private void Char_Info_print()
    {
        Debug.Log("3초 뒤");
        Console.WriteLine($"Name: {name}");
        Debug.Log($"이름 {name}");
        Console.WriteLine($"Age: {age}");
        Debug.Log($"나이 {age}");
        Console.WriteLine($"Gender: {gender}");
        Debug.Log($"성별 {gender}");
        Console.WriteLine($"Level: {level}");
        Debug.Log($"레벨 {level}");
        Console.WriteLine($"Health: {health}");
        Debug.Log($"체력 {health}");
    }

    public string Name
    {
        get { return name; }
        set { name = value; }
    }

    public int Age
    {
        get { return age; }
        set { age = value; }
    }

    public string Gender
    {
        get { return gender; }
        set { gender = value; }
    }

    public int Level
    {
        get { return level; }
        set { level = value; }
    }

    public float Health
    {
        get { return health; }
        set { health = value; }
    }

    public void Attack(float damage)
    {
        Console.WriteLine("공격 함수");
        Debug.Log("공격함수 ON'");
    }

    public void Defend(float damage)
    {
        Console.WriteLine("방어 함수");
        Debug.Log("방어함수 ON'");
    }

    public void LevelUp(int newLevel)
    {
        level = newLevel;
        Console.WriteLine("레벨업 함수");
        Debug.Log($"레벨업 {level}");
    }
}