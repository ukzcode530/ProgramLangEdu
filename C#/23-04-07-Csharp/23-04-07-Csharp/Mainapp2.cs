//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace _23_04_07_Csharp
//{
//    class Profile
//    {

//     public string Name { get; set; }
//     public int Height { get; set; }


//       }

//    class Mainapp2
//    {


//        static void Main(string[] args)
//        {


//            Profile[] arrprofile =
//            {
//                  new Profile() { Name = "정우성", Height = 186 },
//                  new Profile() { Name = "서예지", Height = 158 },
//                  new Profile() { Name = "박현진", Height = 172 },
//                  new Profile() { Name = "주영은", Height = 184 },
//                  new Profile() { Name = "전재준", Height = 171 },
//                  new Profile() { Name = "문동은", Height = 165 },
//              };

//            //var listProfile = from profile in arrprofile
//            //                  orderby profile.Height
//            //                  group profile by profile.Height < 175 into g
//            //                  select new { GroupKey = g.Key, Profiles = g };


//            var Profiles1 = from profile in arrprofile  //arrprofile안에 있는 각데이터로 부터
//                            where profile.Height < 175 //조건 175미만 객체만 골라서 
//                            orderby profile.Height descending//키순을 내림차순 정렬 한다.
//                            group profile by profile.Height < 175 into g
//                            select new
//                            {
//                                Name = profile.Name,
//                                InchHeight = profile.Height * 0.393
//                                GroupKey = g.Key, Profiles = g
//                            };

//            foreach ( var Group in Profiles1)
//            {

//                Console.WriteLine("- 175cm 미만? : {0}", Group.GroupKey);

//                foreach(var profile in Group.Profiles)
//                {

//                    Console.WriteLine(" {0},{1}", profile.Name, profile.Height);

//                }

//            }



//        }


//    }
//}
