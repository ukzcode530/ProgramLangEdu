using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AtentsJungBo;


namespace _23_03_27
{
    class MainApp
    {

        //static double Square(double arg)
        //{
        //    // 이 메소드를 구현해주세요.
        //    double result;

        //    result = arg * arg;

        //    return result;
        //}

        static void Main(string[] args)
        {

            int a = 3;
            int b = 4;
            int resultA = 0;


            Plus(a, b, out resultA);

            Console.WriteLine("{0} + {1} = {2}", a, b, resultA);

            double x = 2.4;
            double y = 3.1;
            double resultB = 0;


            Plus(x, y, out resultB);


            Console.WriteLine("{0} + {1} = {2}", x, y, resultB);



            //double mean = 0;

            //Mean(1, 2, 3,  4,  5, ref mean);

            //Console.WriteLine("평균 : {0}",mean);

            //while(true)
            //    { 
            //    Console.Write("수를 입력하세요:");
            //    string input = Console.ReadLine();
            //    double arg = Convert.ToDouble(input);

            //    Console.WriteLine("결과:{0}",Square(arg));
            //    }



            //Atentsinfo atents = new Atentsinfo();
            //int x = 20;
            //int y = 30;
            //atents.Swap(ref x,ref y);
            //Console.WriteLine("x{0} y{1}",x,y);
            //int num1;
            //int num2;
            //int num3;

            //Console.WriteLine("정수 세개 입력:");

            //Console.Write("첫번째: ");
            //num1 = int.Parse(Console.ReadLine());

            //Console.Write("두번째: ");
            //num2 = int.Parse(Console.ReadLine());

            //Console.Write("세번째: ");
            //num3 = int.Parse(Console.ReadLine());


            //atents.CalculMax(num1, num2, num3);
            //atents.CalculMin(num1, num2, num3);
            ////출력 전용 매개 변수

            //int a = 20;
            //int b = 3;
            //int c, d;
            //Atentsinfo.Divide(a, b, out c, out d);
            //Console.WriteLine();


            //Atentsinfo atentsInfo = new Atentsinfo();




        }

        public static void Plus(int a, int b, out int c)
        {

            c = a + b;

        }

        public static void Plus(double a, double b, out double c)
        {

            c = a + b;

        }
        //public static void Mean(

        //    double a, double b, double c,
        //    double d, double e, ref double mean)
        //{

        //    mean = (a + b + c + d +  e) / 5;

        //}

        //public static void Divide(int a, int b, out int quotient,out int refmainer)
        //{
        //    quotient = a / b;
        //    refmainer = a % b;
        //}

    }
    }
