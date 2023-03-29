using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MethodHidden;
using PartialClass;
using MyExtension;

namespace _23_03_29_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {


            #region 메서드 숨기기
            //Base baseObj = new Base();
            //baseObj.MyMethod();
            //derivedObj.MyMethod();

            //Derived derivedObj = new Derived();
            //derivedObj.Mymethod();

            //Base baseOrDerived = new Derived();
            //baseOrDerived.MyMethod();
            //// 메소드 숨기기란 CLR에게 기반 클래스에 구현된 버전 
            //// 

            #endregion

            #region 분할클래스 출력
            //YourClass obj = new YourClass();
            //obj.Method1();
            //obj.Method2();
            //obj.Method3();
            //obj.Method4();
            #endregion


            Console.WriteLine("{0} 2 : {1}",3,3.Square());
            Console.WriteLine("{0}, {1}, {2}",3,4,3.Power(4));


        }
    }
}
