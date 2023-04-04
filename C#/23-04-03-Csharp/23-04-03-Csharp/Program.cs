using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using indexer;
using indexer2;
//1차원 배열 2차원 배열 3차원 배열
//가변 길이 배열

namespace _23_04_03_Csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region 가변길이배열 
            //  // int[,] arrtest = new int[3][2];

            //  //가변길이 배열과 2차원배열 헷갈리면 안됨.
            //  int[][] jagged = new int[3][];
            //  jagged[0] = new int[5] { 1, 2, 3, 4, 5 };
            //  jagged[1] = new int[] { 10, 20, 30};
            //  jagged[2] = new int[] { 100, 200 };
            //  //foreach 로 출력 이중 foreach 출력

            //  foreach(int[] arr in jagged)
            //  {
            //      Console.WriteLine("Length : {0}", arr.Length);
            //      foreach (int e in arr)
            //      {
            //          Console.WriteLine("{0}", e);

            //      }
            //      Console.WriteLine();
            //  }
            //  int[][] jagged2 = new int[2][]
            //  {
            //      new int[]{1000,2000},
            //      new int[]{6,7,8,9,}
            //  };

            //  foreach (int[] arr in jagged2)
            //  {
            //      Console.WriteLine("Length : {0}",arr.Length);
            //      foreach(int e in arr)
            //      {
            //          Console.WriteLine("{0}",e);

            //      }
            //      Console.WriteLine();
            //  }

            //  string[][] jagged3 = new string[2][]
            //{
            //      new string[]{"ABC","DEF"},
            //      new string[]{"AB","CD","EF","FH",}
            //};

            //  foreach (string[] arr in jagged3)
            //  {
            //      Console.WriteLine("Length : {0}", arr.Length);
            //      foreach (string e in arr)
            //      {
            //          Console.WriteLine("{0}", e);
            //      }
            //      Console.WriteLine();
            //  }
            #endregion

            #region ArrayList

            //List<int> arrList = new List<int>();
            //List<double> arrList2 = new List<double>();
            //Collections 이란 같은 성격을 띄는 데이터의 
            //모음을 담는 자료구조 말한다.
            // ArrayList 배열을 닮은 구조이다. Queue stack , Hash Table


            //ArrayList는 게임에서 많이 쓰지않는다.  그냥 List를 많이씀.
            //Boxing unboxing이 발생하기때문에 대규모 프로젝트에서는 어울리지 않는다.

            //ArrayList list = new ArrayList();
            //for (int i = 0; i < 5; i++)
            //    list.Add(i);
            //foreach(object obj in list )
            //    Console.Write("{0}",obj);
            //Console.WriteLine();
            //list.RemoveAt(2);
            //  foreach(object obj in list)
            //    Console.Write("{0}", obj);
            //Console.WriteLine();
            //list.Insert(2, 2);
            //foreach (object obj in list)
            //    Console.Write("{0}", obj);
            //list.Add("abc");
            //list.Add("def");
            //Console.WriteLine();
            //for(int i=0; i<list.Count; i++)
            //    Console.Write("{0}", list[i]);
            //Console.WriteLine();

            #endregion

            #region Queue (FIFO)
            //Queue que = new Queue();
            //que.Enqueue(1);
            //que.Enqueue(2);
            //que.Enqueue(3);
            //que.Enqueue(4);
            //que.Enqueue(5);
            //while(que.Count > 0)
            //    Console.Write(que.Dequeue());
            //Console.WriteLine();
            #endregion

            #region Stack (LIFO)
            //Stack stack = new Stack();
            //stack.Push(1);
            //stack.Push(2);
            //stack.Push(3);
            //stack.Push(4);
            //stack.Push(5);
            //stack.Push(6);
            //while(stack.Count > 0)
            //    Console.WriteLine(stack.Pop());
            #endregion

            #region HashTable 
            //해시 테이블 PlayerPrefabs
            //Hashtable ht = new Hashtable();
            //ht["하나"] = "One";
            //ht["둘"] = "Two";
            //ht["셋"] = "Three";
            //Console.WriteLine(ht["하나"]);
            //Console.WriteLine(ht["둘"]);
            //Console.WriteLine(ht["셋"]);
            //해시테이블 자료구조 알고리즘 끝부분에 나오는 부분이다.
            //쉽게 이야기 하면 자료를 찾을 때 이진탐색알고리즘 이나 순차적으로 리스트
            //탐색 해나가지만 해시테이블은 키를 이용해 단번에 데이터가 저장되어 있는 
            //컬렉션 내의 주소를 게산 해내는 데 이것을 해싱(hashing) 이라고 하는데 
            //HashTable의 이름은 이 알고리즘에서 유래 한 것이다. 
            #endregion

            #region Indexer
            // 인덱서 정말 중요 나중에 LINQ랑 여관되어서 많이 쓰임.
            // 데이터 베이스와 연관되어서 쓰인다.
            //MyList list = new MyList();
            //for(int i=0; i<5; i++)
            //{
            //    list[i] = (i + 1);
            //}

         
            //for(int i=0; i< list.Length; i++)
            //    Console.WriteLine(list[i]);
            // 아무클래스나 foreach로 돌릴수 없다.
            //foreach(int e in list)
            //{
            //    Console.WriteLine(e);
            //}

          

        

            Yourlist ylist = new Yourlist(5);

            foreach (int element in ylist)
            {
                ylist[element] = (element + 1);
            }

            for (int i = 0; i < ylist.Length; i++)
            {
                Console.WriteLine(ylist[i]);
            }


            #endregion

        }

    }
}
