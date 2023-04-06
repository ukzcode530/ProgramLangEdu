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
//   //일반화 버전의 델리게이트
   
//    //**
//    //where T:struct
//    // T는 null을 허용하지 않는 값형식이어야 한다.
//    // where T:class T 참조 형식이어야 한다.
//    // where T: notnull T는 null이 아닌 형식 이어야 한다.
//    // where T:<interfacename>
//    // T는 지정된 인터페이스 이거나 자식으로 파생된 유형 이어야 한다.


//    delegate int Comparer<T>(T a, T b);

//    internal class Program
//    {
//        static int AscendCompare<T>(T a, T b) where T:IComparable<T>
//        {                                     // IComparable<T>을 상속해야한다.
//            return a.CompareTo(b);
//            //if (a > b)
//            //    return 1;
//            //else if (a == b)
//            //    return 0;
//            //else
//            //    return -1;
//        }
//        static int DscendCompare<T>(T a, T b) where T:IComparable<T>
//        {
//            return a.CompareTo(b) * -1;
//            //-1을 곱하면 자신보다 큰경우 -1 같으면 0 작은 경우에는 1

//            //if (a < b)
//            //    return 1;
//            //else if (a == b)
//            //    return 0;
//            //else
//            //    return -1;
//        }

//        static void BubbleSort<T> (T[] DataSet, Comparer<T> comparer)
//        {
//            int i = 0;
//            int j = 0;
//            T temp;


//            for (i = 0; i < DataSet.Length - 1; i++)
//            {
//                for (j = 0; j < DataSet.Length - (i + 1); j++)
//                {
//                    if (comparer(DataSet[j], DataSet[j + 1]) > 0)
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

//            #region Bubble sort Deligate
//            //int[] array = { 3, 7, 4, 2, 10, 6, 17, 21, 11 };
//            //Console.WriteLine("Sorting ascending....");
//            //BubbleSort(array, new Comparer(AscendCompare));
//            //for (int i = 0; i < array.Length; i++)
//            //    Console.Write("{0} ", array[i]);

//            //Console.WriteLine();

//            //BubbleSort(array, new Comparer(DscendCompare));
//            //for (int i = 0; i < array.Length; i++)
//            //    Console.Write("{0} ", array[i]);
//            #endregion

//            #region Delegate Two
//            string[] array2 = { "abc", "def", "ghi", "jkl", "mmo" };
//            double[] array3 = { 1.4353, 2.22525, 3.23325, 5.51234 };
//            Console.WriteLine("\n Sorting decinding.......");
//            BubbleSort<string>(array2, new Comparer<string>(DscendCompare));

//            BubbleSort<double>(array3, new Comparer<double>(AscendCompare));

//            for (int i = 0; i<array3.Length; i++)
//            {
//                Console.Write("{0}", array3[i]);
//                Console.WriteLine();


//            }

//            #endregion
//        }
//    }
//}
