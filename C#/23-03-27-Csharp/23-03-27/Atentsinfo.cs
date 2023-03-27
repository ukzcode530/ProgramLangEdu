using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AtentsJungBo
{
    class Atentsinfo
    {
        public void Swap(ref int a, ref int b)
        {
            int temp = b;
            b = a;
            a = temp;

        }

        public void CalculMax(int a, int b, int c)
        {
            int maxNum;

            if (a > b && a > c)
            {
                maxNum = a;
            }
            else if (b > c)
            {
                maxNum = b;
            }
            else
            {
                maxNum = c;
            }

            Console.WriteLine("Max {0}", maxNum);
        }

        public void CalculMin(int a, int b, int c)
        {
            int minNum;

            if (a < b && a < c)
            {
                minNum = a;
            }
            else if (b < c)
            {
                minNum = b;
            }
            else
            {
                minNum = c;
            }

            Console.WriteLine("Min  {0} ", minNum);
        }

        public static void Divide(int a, int b, out int quotient, out int remainder)
        {
            quotient = a / b;
            remainder = a % b;

        }

        public static void PrintProfile(string name, string phone)
        {
            Console.WriteLine("Name : {0} ,Phone{1}", name, phone);

        }

       public void MyMethod(int a = 0, int b = 0) // 선택 매개변수
        {
            Console.WriteLine("{0} {1}", a, b);
        }


    }
}
