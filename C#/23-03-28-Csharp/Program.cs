using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Atents_Jumbo;

namespace _23_03_28_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            #region 클래스 생성자 소멸자 정적필드 동적필드 정적함수 동적함수 구분
            //cat kitty = new cat("키티","하얀색");

            //kitty.Meow();
            //cat nero = new cat("네로","검은색");
            //nero.Meow();
            ////클래스명.변수명이나 함수명 
            //cat.AMethod();
            //cat.a = 20;
            #endregion
            #region 깊은복사 얕은복사
            //Console.WriteLine("Shallow Copy");

            //MyClass.source = new MyClass();
            //source.MyField1 = 10;
            //source.MyFiedl2 = 20;

            //MyClass target = TaskCompletionSource;
            //target.MyField2 = 30;
            //Console.WriteLine("{0} {1}", source.MyField1,source,MyField2);
            //Console.WriteLine("{0} {1}", target.MyField1, target, MyField2);
            //Console.WriteLine("DeepCopy");
            //{
            //    Myclass source = new Myclass();
            //    source.MyField1 = 10;
            //    source.MyField2 = 20;
            //    Myclass target = source.DeepCopy();
            //    target.MyField2 = 30;
            //    Console.WriteLine("{0} {1}", source.MyField1, source, MyField2);
            //    Console.WriteLine("{0} {1}", target.MyField1, target, MyField2);
            //}
            #endregion
            #region this 생성자
            YourClass a = new YourClass();
            a.PrintField();
            Console.WriteLine();
            YourClass b = new YourClass(1);
            a.PrintField();
            Console.WriteLine();
            YourClass c = new YourClass(10,20);
            a.PrintField();
            Console.WriteLine();







            #endregion

        }
    }
}
