using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04_05_CSharp
{
    //delegate int Comparer(int a, int b);
    class Program
    {
        static int AcendingSor<T> (T n1, T n2) where T : IComparable
        {

            return n1.CompareTo(n2);

        }
        static int DecendingSor<T> (T n1, T n2) where T : IComparable
        {

            return n2.CompareTo(n1);

        }
        static void BubbleSort<T>(T[] DataSet, Func<T, T, int> func)
        {
            int i;
            int j;
            T temp;

            for (i = 0; i < DataSet.Length - 1; i++)
            {
                for (j = 0; j < DataSet.Length - (i + 1); j++)
                {
                    if (func(DataSet[j], DataSet[j + 1]) > 0)
                    {
                        temp = DataSet[j + 1];
                        DataSet[j + 1] = DataSet[j];
                        DataSet[j] = temp;
                    }
                }
            }
        }

        static void Main(string[] args)
        {


            int[] array = { 3, 7, 4, 2, 10, 6, 17, 21, 11 };
            string[] array2 = { "abc", "def", "hij", "good" };
            Console.WriteLine("Sorting ascending....");
            BubbleSort(array, AcendingSor);

            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("{0}  ", array[i]);
            }
            BubbleSort(array, DecendingSor);
            Console.WriteLine();
            Console.WriteLine("Sorting decending....");
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("{0}  ", array[i]);
            }

            Console.WriteLine();

            Console.WriteLine("Sorting ascending....");
            BubbleSort(array2, AcendingSor);

            for (int i = 0; i < array2.Length; i++)
            {
                Console.Write("{0}  ", array2[i]);
            }

            Console.WriteLine();

            Console.WriteLine("Sorting decending....");
            BubbleSort(array2, DecendingSor);

            for (int i = 0; i < array2.Length; i++)
            {
                Console.Write("{0}  ", array2[i]);
            }

        }
    }
}