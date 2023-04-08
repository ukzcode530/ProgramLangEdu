using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_04_07_Csharp
{

    //    class Class
    //    {
    //        public string Name { get; set; }
    //        public int[] Score { get; set; }

    //    }


    class Car
    {

        public int Cost { get; set; }
        public int MaxSpeed { get; set; }

    }



    class Mainapp
    {

        static int Main(string[] str)
        {


            Car[] cars =
                {
                   new Car(){Cost = 56, MaxSpeed= 120},
                   new Car(){Cost = 70, MaxSpeed = 150},
                   new Car(){Cost = 45, MaxSpeed = 180},
                   new Car(){Cost = 32, MaxSpeed = 200},
                   new Car(){Cost = 82, MaxSpeed = 280},

                };


            //Class[] arrClass =
            //{
            //                new Class() {Name="연두반", Score=new int[]{99,80,70,24}},
            //                new Class() {Name="분홍반", Score=new int[]{60,45,87,72}},
            //                new Class() {Name="파랑반", Score=new int[]{92,30,85,94}},
            //                new Class() {Name="노랑반", Score=new int[]{90,88,0,17}}
            //            };

            var Carclase1 = from c in cars
                            where c.MaxSpeed >= 150 && c.Cost >= 50
                            orderby c.MaxSpeed ascending
                            select c;

            var Carclase2 = from c in cars
                            where c.Cost < 60
                            orderby c.Cost
                            select c;

            foreach (var c in Carclase1)
            {
                Console.WriteLine("{0},  {1}", c.Cost, c.MaxSpeed);

            }


            foreach (var c2 in Carclase2)
            {
                Console.WriteLine("{0},  {1}", c2.Cost, c2.MaxSpeed);

            }



            //            var classes1 = from c in arrClass
            //                          from s in c.Score
            //                          where s < 60
            //                          orderby s
            //                          select new { c.Name, Lowest = s };

            //            foreach ( var c in classes1)
            //                Console.WriteLine("낙제 : {0} ({1})", c.Name, c.Lowest);



            //            Console.WriteLine();

            //            var classes2 = from c in arrClass
            //                           from s in c.Score
            //                           where s > 60
            //                           orderby s
            //                           select new { c.Name, Best = s };
            //            foreach (var c in classes2)
            //                Console.WriteLine("낙제 : {0} ({1})", c.Name, c.Best);




            return 0;

        }

    }
}
