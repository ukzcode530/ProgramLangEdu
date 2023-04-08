//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace _23_04_07_Csharp
//{

//    class Profile
//    {

//        public string Name { get; set; }
//        public int Height { get; set; }


//    }

//    class Product
//    {

//        public string Title { get; set; }
//        public string Star { get; set; }
//        public int Age { get; set; }

//    };



//    class Mainapp3
//    {
//        static void Main(string[] args)
//       {
//            Profile[] arrprofile =
//            {
//                  new Profile() { Name = "정우성", Height = 186 },
//                  new Profile() { Name = "김태희", Height = 158 },
//                  new Profile() { Name = "고현정", Height = 172 },
//                  new Profile() { Name = "이문세", Height = 184 },
//                  new Profile() { Name = "하하", Height = 171 },
//              };

//            Product[] arrProduct =
//            {
//                new Product() {Title = "비트",         Star="정우성",Age = 43},
//                new Product() {Title = "CF 다수",         Star="김태희",Age = 41},
//                new Product() {Title = "아이리스",         Star="김태희",Age = 41},
//                new Product() {Title = "모래시계",         Star="고현정",Age = 50},
//                new Product() {Title = "Solo 예찬",         Star="이문세",Age = 65}


//            };

//            //var listprofile =
//            //    from profile in arrprofile
//            //    join product in arrProduct on profile.Name equals Product.Star
//            //    select new
//            //    {
//            //        Name = profile.Name,
//            //        Work = Product.Title,
//            //        Height = profile.Height

//            //    };

//            //Console.WriteLine("----- 내부 조인 결과--------");
//            //foreach(var profile in listProfile)
//            //{
//            //    Console.WriteLine("이름:{0}, 작품:{1}, 키:{2}cm",
//            //        profile.Name, profile.Work, profile.Height);


//            //}

//            //listprofile =
//            //   from profile in arrProfile
//            //   join product in arrProduct on profile.Name equals product.Star into ps
//            //   from product in ps.DefaultIfEmpty(new Product(){ Title="그런거 없음"})
//            //   select new
//            //   {
//            //       Name = Profile.Name,
//            //       Work = Product.Title,
//            //       Height = Profile.Height

//            //   };

//            //Console.WriteLine();

//            //    Console.WriteLine("------외부 조인 결과 -----"); 
//            //foreach(var profile in listProfile)
//            //{

//            //    Console.WriteLine("이름:{0}, 작품:{1}, 키:{2}cm",  
//            //        profile.Name, profile.Work, profile.Height);

//            //}


//            //var heightStat = from profile in arrprofile
//            //                 group profile by profile.Height < 175 into g
//            //                 select new
//            //                 {
//            //                     Group = g.Key==true?"175미만":"175이상",
//            //                     Count = g.Count(),
//            //                     Max   = g.Max(profile => profile.Height),
//            //                     Min   = g.Min(Profile => Profile.Height),
//            //                     Average = g.Average(profile => profile.Height)
                       
//            //                 };

//            //var ageStat = from product in arrProduct
//            //              group product by product.Age < 50 into g
//            //              select new
//            //              {
//            //                  Group = g.Key == true ? "50세미만" : "50세 이상",
//            //                  Count = g.Count(),
//            //                  Max = g.Max(product => product.Age),
//            //                  MIn = g.Min(product => product.Age),
//            //                  Average = g.Average(product => product.Age)
//            //              };


//            //foreach(var stat in ageStat)
//            //{

//            //    Console.WriteLine("{0} - Count:{1}, Max : {2}", stat.Group, stat.Count, stat.Max);
//            //    Console.WriteLine("Min : {0} - Average:{1}", stat.MIn, stat.Average);
//            //}

          

                             
//           //foreach(var stat in heightStat)
//           // {
//           //     Console.WriteLine("{0} - Count:{1}, Max:{2},",stat.Group, stat.Count, stat.Max);
//           //     Console.WriteLine("Min:{0}, Average:{1}",stat.Min,stat.Average);


//           // }



//        }

//    }
//}
