//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
////람다식 

//namespace _23_04_06_Csharp
//{
//    //delegate int MyDelegate(int a, int b);
//    delegate void MyDelegate(int a);


//    class Market
//    {

//        public event MyDelegate CustomerEvent;

//        public void BuySomthing( int CustomerNo)
//        {
//            if (CustomerNo == 30)
//                CustomerEvent(CustomerNo);

//        }

//    }

//    class Mainapp
//    {
         
//        static void Main(string[] args)
//        {

//            Market market = new Market();
//            market.CustomerEvent += new MyDelegate(delegate (int CustomerNo)
//           {
//               Console.WriteLine("ㅊㅋㅊㅋ" + CustomerNo + "번째 고갱님");


//           });

//            for (int customerNo = 0; customerNo < 100; customerNo += 10)
//                market.BuySomthing(customerNo);

//            //MyDelegate Callback;

//            //Callback = delegate (int a, int b) { return a + b; };

//            //Console.WriteLine(Callback(3,4));
            
//            //Callback = delegate (int a, int b) { return a + b; };

//            //Console.WriteLine(Callback(7,5));

//        }
//    }
//}
