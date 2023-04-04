using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace indexer2
{
    class Yourlist : IEnumerable, IEnumerator
    {
        private int[] array;
        int position = -1;


        public Yourlist()
        {
            array = new int[3];

        }

        public Yourlist(int length)
        {
            array = new int[length];

        }

        public int this[int index]
        {
            get { return array[index]; }

            set {
                    if(index >= array.Length)
                {
                    Array.Resize<int>(ref array, index + 1);
                    Console.WriteLine("Resized:{0}", array.Length);
                }
                array[index] = value;
            
                }
        }

        public int Length
        {
            get { return array.Length; }
        }
        public object Current
        {
            get { return array[position]; }
        }

        public IEnumerator GetEnumerator()
        {
            for (int i=0; i< array.Length; i++)
            {
                yield return (array[i]);
            }
        }

        public bool MoveNext()
        {
           if(position > array.Length -1)
            {
                Reset();
                return false;
            }

            position++;
            return position < array.Length;
        }

        public void Reset()
        {
            position = -1;
        }
    }
}
