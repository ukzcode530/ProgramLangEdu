//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using Delegate;
//namespace _04_05_CSharp
//{
//    delegate int Comparer<T> (T a, T b);
//    class Program
//    {
//        static int AscendCompare<T> (T a, T b) where T : IComparable<T>
//        {
//            //if (a > b)
//            //    return 1;
//            //else if (a == b)
//            //    return 0;
//            //else
//            //    return -1;
//            return a.CompareTo(b);
//        }
//        static int DesendCompare<T> (T a, T b) where T : IComparable<T>
//        {
//            //if (a < b)
//            //    return 1;
//            //else if (a == b)
//            //    return 0;
//            //else
//            return a.CompareTo(b)*-1;
//        }
//        static void BubbleSort<T>(T[] DataSet, Comparer<T> comparerer)
//        {
//            int i = 0;
//            int j = 0;
//            T temp;

//            for (i = 0; i < DataSet.Length - 1; i++)
//            {
//                for (j = 0; j < DataSet.Length - (i + 1); j++)
//                {
//                    if (comparerer(DataSet[j], DataSet[j + 1]) > 0)
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


//            int[] array = { 3, 7, 4, 2, 10, 6, 17, 21, 11 };
          
//            Console.WriteLine("Sorting ascending....");
//            BubbleSort(array, new Comparer<int>(AscendCompare));
//            for (int i = 0; i < array.Length; i++)
//                Console.Write("{0} ", array[i]);
//            Console.WriteLine();
//            Console.WriteLine("Sorting dscending....");
//            BubbleSort(array, new Comparer<int>(DesendCompare));
//            for (int i = 0; i < array.Length; i++)
//                Console.Write("{0} ", array[i]);


//            Console.WriteLine();
//            string[] array2 = { "Atens", "Game", "Acadmey", "Unity" };
//            Console.WriteLine("Sorting ascending....");
//            Console.WriteLine();
//            BubbleSort<string>(array2, new Comparer<string>(AscendCompare));
//            for (int i = 0; i < array2.Length; i++)
//                Console.Write("{0} ", array2[i]);

//            Console.WriteLine();
//            Console.WriteLine("Sorting dscending....");
//            BubbleSort<string>(array2, new Comparer<string>(DesendCompare));
//            for (int i = 0; i < array2.Length; i++)
//                Console.Write("{0} ", array2[i]);


//            double[] array3 = { 1.5, 2.52525, 3.25252, 4.5262, 5.525 };
//            Console.WriteLine("Sorting ascending....");
//            Console.WriteLine();
//            BubbleSort<double>(array3, new Comparer<double>(AscendCompare));
//            for (int i = 0; i < array3.Length; i++)
//                Console.Write("{0} ", array3[i]);

//            Console.WriteLine();
//            Console.WriteLine("Sorting dscending....");
//            BubbleSort<double>(array3, new Comparer<double>(DesendCompare));
//            for (int i = 0; i < array3.Length; i++)
//                Console.Write("{0} ", array3[i]);


//        }
//    }
//}