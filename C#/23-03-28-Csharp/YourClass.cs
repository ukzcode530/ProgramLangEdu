using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_03_28_Csharp
{
    class YourClass
    {
        int a, b, c;
        public YourClass()
        {

            this.a = 5425;
            Console.WriteLine("YourClass()");
        }
          public YourClass(int b) : this()
          {

            
            this.b = b;
            Console.WriteLine("YourClass(int b)");
        }

           public YourClass(int b, int c) :this(b)
        {
           
            this.c = c;
            Console.WriteLine("YourClass(int b, int c)");
        }
        public void PrintField()
        {
            Console.WriteLine("a:{0} ,b:{1} ,c:{2}",a,b,c);
        }

    }
}
