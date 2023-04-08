using System;
//using System.Collections.Generic;
//using System.Collections;
//using System.Linq; // 링크 데이타를 다루는 질의어
//using System.Text;
//using System.Threading.Tasks;
//// Linq; 질의 언어 (Query)
//// S(truct)Q(uerry)L (anguage)
//// 

//namespace _23_04_07_Csharp
//{
//    class Profile
//    {

//        public string Name { get; set; }

//        public int Height { get; set; }


//    }

//    class Program
//    {


//        static void Main(string[] args)
//        {
          //  Profile[] arrprofile =
          //  {
          //      new Profile() { Name = "정우성", Height = 186 },
          //      new Profile() { Name = "서예지", Height = 158 },
          //      new Profile() { Name = "박현진", Height = 172 },
          //      new Profile() { Name = "주영은", Height = 184 },
          //      new Profile() { Name = "전재준", Height = 171 },
          //      new Profile() { Name = "문동은", Height = 165 },
          //  };

          //  //ArrayList list = new ArrayList();  boxing unboxing으로 인한 형변환이 심해서 안쓰는경우가있음

          //  //List<Profile> profiles = new List<Profile>();

          //  #region List에서 지원하는 메서드를 이용해서 하는 방법 
          //  //foreach(Profile _profile in arrprifile)
          //  //{
          //  //    if (_profile.Height < 175)
          //  //        profiles.Add(_profile);
          //  //}
          //  //profiles.Sort(
          //  //    (profile1, profile2) =>
          //  //    {

          //  //        return profile1.Height - profile2.Height;

          //  //    });
          //  #endregion

          //  #region Linq를 이용 해서 데이터 다루기
          //  //var Profiles1 = from profile in arrprofile  // arrprofile안에 있는 각데이터로 부터
          //  //               where profile.Height < 175  // 175미만 객체만 골라서 
          //  //               orderby profile.Height ascending // 키순을 오름차순 정렬 한다.
          //  //               select profile; // profile 객체를 추출 합니다.

          //  //foreach (var profile in Profiles1)
          //  //{
          //  //    Console.WriteLine("{0}   , {1}",profile.Name,profile.Height);
          //  //}


          //  //Console.WriteLine();

          //  //var Profiles2 = from profile in arrprofile
          //  //                where profile.Height < 175
          //  //                orderby profile.Height descending
          //  //                select profile;

          //  //foreach (var profile in Profiles2)
          //  //{
          //  //    Console.WriteLine("{0} , {1}",profile.Name,profile.Height);

          //  //}




          //  int[] numbers = { 9, 2, 6, 4, 5, 3, 7, 8, 1, 10 };

          //  var Linqtest1 = from linqutest1 in numbers
          //                  where linqutest1 % 2 == 0
          //                  orderby linqutest1 ascending
          //                  select linqutest1;

          //foreach (var linqutest1 in Linqtest1)
          //  {
          //      Console.WriteLine("{0}", linqutest1);

          //  }
          //  #endregion


          //  var Profiles1 = from profile in arrprofile  // arrprofile안에 있는 각데이터로 부터
          //                  where profile.Height < 175  // 175미만 객체만 골라서 
          //                  orderby profile.Height ascending // 키순을 오름차순 정렬 한다.
          //                  select new
          //                  {
          //                      Name = profile.Name,
          //                      InchHeight = profile.Height * 0.393

          //                  };

          //  foreach (var profile in Profiles1)
          //  {
          //      Console.WriteLine("{0}   , {1}", profile.Name, profile.InchHeight);
          //  }






//        }
//    }


//}