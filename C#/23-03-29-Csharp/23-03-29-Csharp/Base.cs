using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MethodHidden
{
    //
    class Base
    {

        public void MyMethod()
        {

            Console.WriteLine("Base.MyMethod()");
        }


        class Dervied : Base
        {

            public new void MyMethod()
            {
                //부모 클래스로 부터 상속 받았지만 부모클래스의 함수를 노출
                Console.WriteLine("Derived.MyMethod()");
                //Base.MyMethod()를 감추고 Dervied 클래스에 
                //구현된 MyMethod()만 노출된다. 
               
            }
        }
    }
}
