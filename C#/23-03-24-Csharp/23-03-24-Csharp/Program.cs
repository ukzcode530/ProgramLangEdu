using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_03_24_Csharp
{
    class Program
    {

        enum DialogResult {YES,NO,CANCEL,CONFIRM,OK}

        static void Main(string[] args)
        {
            //Console.WriteLine("Hellow Atents");
            //Console.WriteLine("Hello,{0}",args[0]);
            //object a = 123;
            //object b = 3.141512345678912345678m;
            //object c = true;
            //object d = "안녕하세요!";
            //Console.WriteLine(a);
            //Console.WriteLine(b);
            //Console.WriteLine(c);
            //Console.WriteLine(d);

            //int a = 123;
            //object b = a;
            ////a에 담긴 값을 박싱해서 힙에 저장 
            //int c = (int)b; // b의 담긴값을 언박싱해서 스텍에 저장 
            //Console.WriteLine(a);
            //Console.WriteLine(b);
            //Console.WriteLine(c);
            //Console.WriteLine((int)DialogResult.YES);
            //Console.WriteLine((int)DialogResult.NO);
            //Console.WriteLine((int)DialogResult.CANCEL);
            //Console.WriteLine((int)DialogResult.CONFIRM);

            //Nullable 형식

            //int? a = null;
            //Console.WriteLine(a.HasValue);
            //a = 37;
            //Console.WriteLine(a.HasValue);
            //Console.WriteLine(a.Value);
            //float? b = null;

            //int? z = null;
            //Console.WriteLine(z!=null);
            //z = 3;

            //var는 지역변수로만 사용가능
            //클래스 필드에 생성자에서 선언하면 안된다
            var a = 20;
            Console.WriteLine("Type:{0},value{1}",a.GetType(),a);
            var b = 3.1415f;
            Console.WriteLine("Type:{0},value{1}",b.GetType(),b);
            var c = "Hello Atents";
            Console.WriteLine("Type:{0},value{1}",c.GetType(),c);
            var arr = new int[] { 10, 20, 30 };
            Console.WriteLine("Type:{0},value{1}", arr.GetType(), arr);
            int[] arr2 = { 10, 20, 30 };
            foreach(var _arr2 in arr2)
            {
                Console.Write("{0} ", _arr2);
            }
            Console.WriteLine();
            int[] arr3 = new int[5] { 1, 2, 3, 4, 5 };
            foreach(var _arr3 in arr3)
            {
                Console.WriteLine("{0} ",_arr3);
                
            }
            int f = 20;
            Console.WriteLine(f.ToString());
        }
    }
}
