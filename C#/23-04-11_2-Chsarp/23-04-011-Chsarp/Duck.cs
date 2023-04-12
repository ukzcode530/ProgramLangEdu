using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DynamicType
{ 
    class Duck
    {
        public void Walk()
        {
            Console.WriteLine("Duck.Walk");
        }

        public void Swim()
        {
            Console.WriteLine("Duck.Swim");

        }

        public void Quack()
        {
            Console.WriteLine("Duck.Quack");
        }

    }

    class Mallard :Duck //청둥오리
    {



    }

   class Robot
    {
        public void Walk()
        {
            Console.WriteLine("Robot.Walk");
        }

        public void Swim()
        {
            Console.WriteLine("Robot.Swin");

        }

        public void Quack()
        {
            Console.WriteLine("Robot.Quack");
        }




    }

 
}
