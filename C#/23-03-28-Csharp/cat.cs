using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Atents_Jumbo
{
    class cat
    {
        public string Name;
        public string Color;
        public static int a; //정적 필드

       public cat(string _name,string _color)
        {
            Name = _name;
            Color = _color;
        }

        public void Meow()
        {
            Console.WriteLine("{0} : {1}",Name,Color); ;
          

        }
        public static void AMethod() // 정적 메소드
        {
            Console.WriteLine("정적필드");

        }
        ~cat()
        {
            Console.WriteLine("{0} : 잘가",Name);
        }
    }
}
