using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Ex9_1
{
    class Program
    {
        static bool CheckPassed(int score)
        {
            if (score >= 60)
                return true;
            else
                return false;
        }
        static void Print(int value)
        {
            Console.Write("{0}",value);
        }

        static void Main(string[] args)
        {
            #region 추상프로퍼티
            //NameCard mcard = new NameCard();
            //mcard.Age = 24;
            //mcard.Name = "상현";

            //Console.WriteLine("나이 : {0}",mcard.Age);
            //Console.WriteLine("이름 : {0}",mcard.Name);



            //var namecard = new Namecard2()
            //{
            //    Name ="박상현",    Age = 17
            //};
            //Console.WriteLine("이름:{0}, 나이:{1}",namecard.Name, namecard.Age);

            //var Complex = new Complex()
            //{
            //    Real = 3, Imaginary = -12

            //};

            //    NameCard MyCard = new NameCard();

            //    MyCard.SetAge(24);
            //MyCard.SetName("상현");

            //Console.WriteLine("나이 : {0}",MyCard.GetAge());
            //Console.WriteLine("이름 : {0}",MyCard.GetName());





            //    Product product_1 = new MyProduct()
            //    {
            //        ProductDate = new DateTime(2014, 1, 10)


            //    };
            //    Console.WriteLine("Product: {0},Product Date : {1}",
            //        product_1.SerialID,
            //        product_1.ProductDate);


            //    Product product_2 = new MyProduct()
            //    {
            //        ProductDate = new DateTime(2017, 1, 10)


            //    };
            //    Console.WriteLine("Product: {0},Product Date : {1}",
            //        product_2.SerialID,
            //        product_2.ProductDate);
            //}
            #endregion


            //배열 : 1차원 2차원 3차원 
            #region 배열 초기화 첫번째방법
            //    int[] scores = new int[5];
            //scores[0] = 80;
            //scores[1] = 74;
            //scores[2] = 81;
            //scores[3] = 90;
            //scores[4] = 34;
            //    int sum = 0;

            //    foreach (var score in scores) { 

            //        Console.Write("\n"+score + "");
            //    }
            //    foreach (var score in scores)
            //        sum += score;
            //    int average = sum / scores.Length;
            //    Console.WriteLine("{0} {1}",sum,average);
            #endregion
            #region 배열 초기화 두번째 세번째 방법
            //string[] array1 = { "안녕", "hi", "Halo" };
            //foreach(var _array in array1)
            //{
            //    Console.WriteLine(_array);

            //}
            //string[] arr2 = new string[3] { "안녕", "hi", "Halo" };
            //foreach (var _array2 in arr2)
            //{
            //    Console.WriteLine(_array2);

            //}
            //string[] arr3 = new string[] { "안녕", "hi", "Halo" };
            //foreach (var _array2 in arr3)
            //{
            //    Console.WriteLine(_array2);

            //}
            #endregion



            #region  다른 배열의 여러가지 방법들
            //Sort() 정렬
            //BinaraySearch<T> 이진탐색 반으로나놔서 탐색  //  이진탐색 알고리즘
            //IndexOf() 배열에서 찾고자 하는 특정데이터 인덱스를 반환
            //TrueForALL<T>() : 배열에서 모든 요소가 ㅏ지정한 조건에 
            //맞는지 여부를 반환  
            //FindIndex<T>() 배열에서 지정한 조건에 부합하는 첫번째 
            //요소의 인덱스를 반환 한다.
            //IndexOf()는 특정값을 찾지만 FindIndex<T>()는 지정한 조건에 
            //바탕하여 값을 찾습니다. 
            //Resize<T>() 배열의 크기를 재조정 한다. 
            //Clear()배열의 요소를 모드 요소를 초기화 한다. 숫자는 0으로 bool이면 false로 참조형식이면
            //null로 초기화 된다.
            //GetLength 배열에서 지정한 차원의 길이를 반환한다. 다차원 배열에서 쓰인다.
            //Length 배열의 길이를 반환 
            //Rank 배열의 차원을 반환 한다.
            //Array.ForEach<int>(scores, new Action<int>(Print));  메소드의 주소를 받아서 foreach 처럼 출력

            //**********************아래는 코드들
            // int[] scores = new int[] { 80, 74, 81, 90, 34 };
            // foreach(int score in scores)
            // {
            //     Console.Write("{0} ",score);
            // }
            // Console.WriteLine();
            // Array.Sort(scores);                               //반환형이 void인 함수 메서드 받아서 이벤트처럼 전달
            // Array.ForEach<int>(scores, new Action<int>(Print));
            // Console.WriteLine();
            // Console.WriteLine("Number of diemnsion : {0}",scores.Rank);
            // Console.WriteLine("Binary Seach : 81 is at {0}",Array.BinarySearch<int>(scores,81));
            // Console.WriteLine("Linear Seach : 90 is at{0}",Array.IndexOf(scores,90));

            // Console.WriteLine("EveryOne passed ? : {0}",Array.TrueForAll<int>(scores,CheckPassed));
            //  //배열, 검사매서드
            // // 배열에서 지정한 조건에 부합하는 첫번째
            // // 요소의 인덱스를 반환한다.

            // int index = Array.FindIndex<int>(scores, delegate (int score)
            //      {
            //          if (score < 60)
            //              return true;
            //          else
            //              return false;
            //      });
            // scores[index] = 61;

            // Console.WriteLine("EveryOne passed ? : {0}", Array.TrueForAll<int>(scores, CheckPassed));

            // Console.WriteLine("Old length of scores : {0} ", scores.GetLength(0));
            // Array.Resize<int>(ref scores, 10);
            // Console.WriteLine("Nelw length of scores : {0} ", scores.Length);
            // Array.ForEach<int>(scores, new Action<int>(Print));
            // Console.WriteLine();
            // Array.Clear(scores, 3, 7);
            //Array.ForEach<int>(scores, new Action<int>(Print));
            // Console.WriteLine();
            #endregion

            #region C# 2차원 배열
            //int[,] array = new int[2, 3];
            //array[0, 0] = 1;
            //array[0, 1] = 2;
            //int[,] array2 = { { 1, 2, 3 }, { 4, 5, 6 } };
            int [,] arr2D = new int[2, 3] { { 1, 2, 3 }, { 4, 5, 6 } } ;

            for (int i =0; i < 2; i++)
            {
                for ( int j =0; j< 3; j++)
                {

                    Console.WriteLine(arr2D[i,j] + "");
                }

            }
            Console.WriteLine("-----------3차원 배열----------");
            int[,,] array3D = new int[4, 3, 2]
            {
                {  {1,2},{ 3,4},{5,6} },
                { {5,6},{ 7,8},{9,10} },
                { {1,2},{ 3,4},{5,6} },
                { {1,2},{ 3,4},{5,6} },
            };

            for (int i=0; i< array3D.GetLength(0); i++)
            {
                for (int j = 0; j < array3D.GetLength(1); j++)
                {
                    for (int k = 0; k < array3D.GetLength(2); k++)
                    {

                        Console.WriteLine(array3D[i,j,k] + " ");

                    }
                    Console.WriteLine();
                }
                }
                        

            #endregion
        }

    }
}
