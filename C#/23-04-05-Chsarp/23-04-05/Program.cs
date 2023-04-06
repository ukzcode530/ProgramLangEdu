//using System;
//using System.Collections.Generic;
//using System.IO;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using Delegate;
////Delegate와 event

//namespace _23_04_05
//{
//    delegate int Comparer(int a, int b);

//    internal class Program
//    {
//        static int AscendCompare(int a, int b)
//        {
//            if (a > b)
//                return 1;
//            else if (a == b)
//                return 0;
//            else
//                return -1;
//        }
//        static int DscendCompare(int a, int b)
//        {
//            if (a < b)
//                return 1;
//            else if (a == b)
//                return 0;
//            else
//                return -1;
//        }

//        static void BubbleSort(int[] DataSet , Comparer comparer)
//        {
//            int i = 0;
//            int j = 0;
//            int temp = 0;


//            for (i=0; i<DataSet.Length -1; i++)
//            {
//                for(j=0; j<DataSet.Length-(i+1); j++)
//                {
//                    if (comparer(DataSet[j],DataSet[j+1]) >0)
//                    {
//                        temp = DataSet[j + 1];
//                        DataSet[j + 1] = DataSet[j];
//                        DataSet[j] = temp;
//                    }
//                }
//            }

//        }

//        static void Main(string[] args)
//        {
//            #region Deligate One
//            //Calculator Calc = new Calculator();
//            //MyDelegate Callback;

//            //Callback = new MyDelegate(Calc.Plus);
//            //Console.WriteLine(Callback(3,4));

//            //Callback = new MyDelegate(Calc.Minus);
//            //Console.WriteLine(Callback(3,4));

//            //함수자체를 매개변수로 넘겨서 쓰기위함.   Mydelegate라는 함수안에 Calc.plus 함수를 사용.
//            #endregion

//            int[] array = { 3, 7, 4, 2, 10, 6, 17, 21, 11 };
//            Console.WriteLine("Sorting ascending....");
//            BubbleSort(array, new Comparer(AscendCompare));
//            for(int i=0; i<array.Length; i++)
//                Console.Write("{0} ", array[i]);

//            Console.WriteLine();

//            BubbleSort(array, new Comparer(DscendCompare));
//            for (int i = 0; i < array.Length; i++)
//                Console.Write("{0} ", array[i]);

//        }
//    }
//}
