using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Gametest : MonoBehaviour
{
    private string name;
    private int age;
    private string gender;
    private int level;
    private float health;

 


    public Gametest(string name, int age, string gender, int level, float health)
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.level = level;
        this.health = health;
    
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
    void Start()
    {
        Gametest character = new Gametest("Alice", 25, "Female", 1, 100.0f);
        Console.WriteLine($"Name: {character.Name}");
        Console.WriteLine($"Age: {character.Age}");
        Console.WriteLine($"Gender: {character.Gender}");
        Console.WriteLine($"Level: {character.Level}");
        Console.WriteLine($"Health: {character.Health}");

        //Debug.Log("�ν��Ͻ� ����");
        //Attack(3f);
        //Defend(10f);
        //LevelUp(10);

        //Char_Info_print(ref character); 

    }



    private  void Char_Info_print(ref Gametest character)
    {
    
        Debug.Log("3�ʰ� �������ϴ�.");
     
        Console.WriteLine($"Name: {character.Name}");
        Console.WriteLine($"Age: {character.Age}");
        Console.WriteLine($"Gender: {character.Gender}");
        Console.WriteLine($"Level: {character.Level}");
        Console.WriteLine($"Health: {character.Health}");
    }
}