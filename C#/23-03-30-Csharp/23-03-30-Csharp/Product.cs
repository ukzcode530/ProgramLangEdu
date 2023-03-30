using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InterFaceProperty
{

    interface IProductName
    {

        string  ProductName
        {
            get;set;
        }

    }

     interface INamedValue
    {
        string Name
        {
            get; set;
        }
      string Value
        {
            get;set;
        }
    }


    class Product : IProductName
    {
        private string productName;

        public string ProductName   //파생클래스는 부모 인터페이스에 선언된 모든 프로퍼티를 구현 해야 한다.
        {

            get { return productName; }
            set { productName = value; }
      
        }

    }
    class NameValue : INamedValue
    {
        public string Name { get; set; }
        public string Value { get; set; }
    }



}
