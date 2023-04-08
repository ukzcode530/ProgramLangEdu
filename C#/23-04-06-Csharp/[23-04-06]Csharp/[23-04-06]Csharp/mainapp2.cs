//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace _23_04_06_Csharp
//{
   
//    class mainapp2
//    {
//        delegate int Calculate(int a, int b);
//        delegate string Concatenate(string[] args);
//        delegate void DoSomthing();
//        static int Main(string[] args)
//        {                //익명의 메서드
//            Calculate calc = delegate (int a, int b)
//            {
//                return a + b;

//            };
//            Console.WriteLine(calc(3,4));
//            // 람다식으로 표시 
//            Calculate calc2 = (a, b) => a + b;
//                             //매개변수 목록  => {문장}
//            Console.WriteLine("{0} + {1} : {2}",3,4,calc2(3,4));

//            Calculate calc3 = (a, b) => a - b;

//            Console.WriteLine("{0} - {1} : {2}",3,4,calc3(3,4));

//            //Concatenate concat = (arr) =>
//            //{
//            //    string result = "";
//            //    foreach (string s in arr)
//            //        result += s;
//            //    return result;
//            //};
//            //Console.WriteLine(concat(args));

//            //DoSomthing DoIt = () =>
//            //{
//            //    Console.WriteLine("뭔가를");
//            //    Console.WriteLine("출력을");
//            //    Console.WriteLine("해보자");
//            //    Console.WriteLine("이렇게!!");
//            //};
//            //DoIt();

//            return 0;  
//        }


//    }
//}
