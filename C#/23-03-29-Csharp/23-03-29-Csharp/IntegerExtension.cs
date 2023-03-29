using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyExtension
{
  public static  class IntegerExtension
    {
        public static int Square(this int myint)
        {

            return myint * myint;
            
        }

        public static int Power(this int myInt,int exponent)
        {
            int result = myInt;
            for(int i=1; i<exponent; i++)
            {
                result = result * myInt;


                return result;
            }
        }

       
    }
}
//확정 메소드는 기존의 클래스의 기능을 확장하는 기법이다.
//기반클래스를 물려받다 파생크를 만든뒤 여기에 필드나 메소드를 
