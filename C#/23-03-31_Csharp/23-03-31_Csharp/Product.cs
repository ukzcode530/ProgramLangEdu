//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;


//namespace PropertyInAbstractClass
//{
//    abstract class Product
//    {
//        private static int serial = 0;
//        public string SerialID //읽기 전용 프로퍼티
//        {
//            get { return String.Format("{0:d5}", serial++); }
//        }
//        //추상 프로퍼티
//        abstract public DateTime ProductDate
//        {
//            get;set;   // 자동 구현 프로퍼티
//        }

//    }

//    class MyProduct : Product
//    {
//        public override DateTime ProductDate
//        { 
//            get; set; 
//        }

//    }
//}
