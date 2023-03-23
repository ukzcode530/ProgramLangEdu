using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AentsGamesPrograming
{
    //데이터에는 기본데이터 형식 이 있고 복합데이터 형식 있다.
    //기본데이터 형식 : 소리 이미지 포함 const 상수 와 열거형 
    //복합 데이터 형식 : 배열 구조체 클래스 
    class Program
    {
        
        static void Main(string[] args)
        {

            #region 기본데이터형 
            //부호 없는 정수 0 - 255 1바이트  양수 
            // byte 
            //sbyte signetbyte 1 바이트 8비트  -128-127
            //short ushort int uint 
            //sbyte a = -10;
            //byte b = 40;
            //Console.WriteLine("a={0},b={1}",a,b);
            //Console.Write("a={0},b={1}", a, b); Console.WriteLine();
            //short c = -30000;
            //ushort d = 60000;
            //Console.WriteLine("c={0},d={1}",c,d);
            //int e = -1000000000;
            //uint f = 300000000;
            //Console.WriteLine("e={0},f={1}",e,f);
            //long g = -50000000000;
            //ulong h = 2000000000000000000;
            //Console.WriteLine("g={0},h={1}", g, h);
            //byte v = 255;
            //sbyte z = (sbyte)v;
            //Console.WriteLine(v);
            //Console.WriteLine(z);
            #endregion
            #region 기본 데이터 형식의 크기 정밀도 

            //uint a = uint.MaxValue;
            //Console.WriteLine(a);
            //int b = int.MaxValue;
            //Console.WriteLine(b);
            //long c = long.MaxValue;
            //Console.WriteLine(c);

            //float d = 3.141592678934567f;
            //Console.WriteLine(d);
            //double e = 3.14159267893456712345678;
            //Console.WriteLine(e);
            ////데시멀 Deciaml
            //decimal f = 3.14592382929538032095123456789m;
            //Console.WriteLine(f);
            #endregion
            #region 문자열 다루기
            //string a = "안녕 하세요";
            //Console.WriteLine(a); Console.WriteLine();
            //char b = 'h';
            //char c = 'i';
            //Console.WriteLine("{0}{1}",b,c);
            #endregion

            //Console.Write("첫번째 수를 입력:     ");
            //int n1 = int.Parse(Console.ReadLine());

            //Console.Write("두번째 수를 입력:     ");
            //int n2 = int.Parse(Console.ReadLine());

            //int result = n1 + n2;

            //Console.WriteLine("{0}+{1}={ 2},", n1, n2, result);

            Console.WriteLine("몇 단?:");
            int num1 = int.Parse(Console.ReadLine());

            Console.WriteLine("마지막 단:");
            int num2 = int.Parse(Console.ReadLine());

            if (num1 < num2)
            {
                Calcul(num1, num2);
            }
            else
            {
                Calcul(num2, num1);
            }
        }

        private static void Calcul(int start, int end)
        {
            for (int i = start; i <= end; i++)
            {
                Console.WriteLine($"{i}단");

                for (int j = 1; j <= 9; j++)
                {
                    Console.WriteLine($"{i} x {j} = {i * j}");
                }

                Console.WriteLine();
            }

        }


        }
    }
