using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_03_29_Csharp
{
    class Mamal
    {

        public void Nurse()
        {

            Console.WriteLine("Nerse()");


        }


        class Dog : Mamal
        {

            public void Bark()
            {
                Console.WriteLine("Bark()");

            }


        }


        class Cat : Mamal
        {


            public void Meow()
            {

                Console.WriteLine("Meow()");
            }


        }



    }
}
