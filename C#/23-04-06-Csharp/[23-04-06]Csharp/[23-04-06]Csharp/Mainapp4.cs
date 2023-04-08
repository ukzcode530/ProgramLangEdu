//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;​

//namespace CSharp12_21

//{

//    class Mainapp4

//    {


      
//        static Func<int,int,int> Ascending = (n1, n2) =>

//        {

//            if (n1 > n2) return 1;

//            else if (n1 == n2) return 0;

//            else

//                return -1;

//        };

//        static Func<int, int, int> Decending = (n1, n2) =>

//         {

//             if (n1 < n2) return 1;

//             else if (n1 == n2) return 0;

//             else

//                 return -1;

//         };

//        static void BubbleSort(int[] Data, Func<int, int, int> compare)

//        {

//            for (int i = 0; i < Data.Length; i++)

//            {

//                for (int j = 0; j < Data.Length - 1 - i; j++)

//                {

//                    if (compare(Data[j], Data[j + 1]) > 0)

//                    {

//                        int temp = Data[j];

//                        Data[j] = Data[j + 1];

//                        Data[j + 1] = temp;

//                    }

//                }

//            }

//​

//        }

//        static void Main(string[] args)

//        {

//            int[] DataSet = new int[] { 5, 2, 4, 7, 11, 10, 8, 6, 9, 3 };

//            BubbleSort(DataSet, Ascending);

//            Console.WriteLine("SortingAscending....");

//            foreach (int num in DataSet)

//            {

//                Console.Write(" " + num);

//            }

//            Console.WriteLine();

//            BubbleSort(DataSet, Decending);

//            Console.WriteLine("Sorting Descending....");

//            foreach (int num in DataSet)

//            {

//                Console.Write(" " + num);

//            }

//            Console.WriteLine();

//​

//​

//        }

//    }

//}