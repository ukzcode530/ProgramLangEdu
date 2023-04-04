using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Markup;

namespace indexer
{
     class MyList : IEnumerable,IEnumerator  //생성자  소멸자 복사생성자 대입연산자 오버로딩 함수, info 함수   프로퍼티
    {
        private int[] array;
        int position = -1;
        public MyList()
        {
            array = new int[3]; 
        }
        //인덱스 중요 필히 다시 연습
        public int this[int index] //프로퍼티  : 클래스에 접근 할 수 있는 통로
        {
            get { return array[index]; }
            set
            {
                if (index >= array.Length) // 배열의 경계 검사
                {
                    //경계를 넘어 가면 리사이징 한다. 하나씩 
                    Array.Resize<int>(ref array, index + 1);
                    Console.WriteLine("ArrayResized:{0}",array.Length);

                }
                array[index] = value;
                 }
        }
        public int Length // 프로퍼티 //IEnumerator
        {
            get { return array.Length; }
        }

        public object Current
        {
            get { return array[position]; }
            //컬렉션의 현재요소를 반환 

        }
        public IEnumerator GetEnumerator() //IEnumerable
        {  // IEnumerator 형식의 객체를 반환
            for (int i = 0; i < array.Length; i++)
                yield return (array[i]);
        }

        public bool MoveNext()   // 다음 배열 요소로 이동 끝을 지난 경우에는 false 성공 true
        {  //IEnumerator
           if(position == array.Length -1)
            {
                Reset();
                return false;
            }
            position++;
            return (position < array.Length);
        }

        public void Reset() // 컬렉션의 첫번째 위치의 앞으로 이동 첫번째 위치가 0이라면 
        {                  // Reset()호출을 하면 -1번으로 이동 하는 것임
                           // 위의 MoveNext()
            position = -1;
        }
    }
}
