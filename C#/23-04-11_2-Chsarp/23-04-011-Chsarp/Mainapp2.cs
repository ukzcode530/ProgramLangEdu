//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using DynamicType;

//namespace _23_04_011_Chsarp
//{
//    //오리타이핑 오리처럼 걷고 오리처럼 헤엄치며
//    // 오리처럼 꽉꽉거리는 새를 봤을 때 오리라고 부른다.
//    // 오리타이핑을 쓰는 이유 
//    // 인터페이스를 상속을 하면 비슷한 일을 
//    // 할수는 있다.  하지만 인터페이스를 설계하기 위해서는 추상화를 잘해야 하는 데 추상화를
//    // 잘하려면 수많은 연습이 필요 하다.
//    // 인터페이스를 잘못 설계 했다가 나중에 파생클래스를 수정 할일이 생기면 
//    // 위로는 인터페이스를 수정하고 아래로는 파생 클래스들 옆으로는 형제 클래스들을 
//    // 줄줄이 수정해야 하는 일이 생긴다 
//    // 오리타이핑은 이런 문제를 만났을때 좀더 유연하게 해결할수 있도록 돕는다.
//    // 상하관계를 이용 하지 않기 때문에 프로그램의 도앚ㄱ에 관여하는 부분에 손을 대면 된다.


//    // 안좋은 점 : 리팩토링 기능을 이용 할 수가 없다.
  


//    internal class Mainapp2
//    {
//        static void Main(string[] args)
//        {
//            dynamic [] arr = new dynamic[] { new Duck(), new Mallard(), new Robot() };

//            foreach ( dynamic duck in arr)
//            {
//                Console.WriteLine(duck.GetType());
//                duck.Walk();
//                duck.Swim();
//                duck.Quack();
//                Console.WriteLine();
//            }

//        }



//    }
//}
