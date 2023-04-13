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

        Invoke("Char_Info_print", 3f); // 3�� �ڿ� Char_Info_print �Լ� ����
    }

    private void Char_Info_print()
    {
        Debug.Log("3�� ��");
        Console.WriteLine($"Name: {name}");
        Debug.Log($"�̸� {name}");
        Console.WriteLine($"Age: {age}");
        Debug.Log($"���� {age}");
        Console.WriteLine($"Gender: {gender}");
        Debug.Log($"���� {gender}");
        Console.WriteLine($"Level: {level}");
        Debug.Log($"���� {level}");
        Console.WriteLine($"Health: {health}");
        Debug.Log($"ü�� {health}");
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
        Console.WriteLine("���� �Լ�");
        Debug.Log("�����Լ� ON'");
    }

    public void Defend(float damage)
    {
        Console.WriteLine("��� �Լ�");
        Debug.Log("����Լ� ON'");
    }

    public void LevelUp(int newLevel)
    {
        level = newLevel;
        Console.WriteLine("������ �Լ�");
        Debug.Log($"������ {level}");
    }
}