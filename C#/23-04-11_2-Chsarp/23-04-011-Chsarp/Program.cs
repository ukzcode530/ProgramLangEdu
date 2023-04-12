//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using System.Windows.Markup;
//using System.Reflection;

//*********************************************************************리플렉션
//C#에서 리플렉션이란, 실행 중에 코드를 검사하고 조작하는 기능을 제공하는 프로그래밍 기술.
//리플렉션을 사용하면 컴파일 타임에는 알 수 없는 객체의 타입을 결정하고, 그 타입의 필드, 메서드 및 속성에 접근하고 수정할 수 있다.


//namespace _23_04_011_Chsarp
//{
//    class Profile
//    {
//        private string name;
//        private string phone;
//        public Profile()
//        {
//            name = ""; phone = "";

//        }

//        public Profile(string name, string phone)
//        {
//            this.name = name;
//            this.phone = phone;

//        }

//        public void Print()
//        {
//            Console.WriteLine("{0},{1}",name,phone);

//        }


//        public string Name//프로퍼티 
//        {
//            get { return name; }
//            set { name = value; }
//        }

//        public string Phone // 프로퍼티 Phone을 보호하기 위한 
//        {
//            get { return phone; }
//            set { phone = value; }

//        }
//    }



//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Type type = Type.GetType("_23_04_011_Chsarp.Profile");
//            MethodInfo methodInfo = type.GetMethod("Print");
//            PropertyInfo nameProperty = type.GetProperty("Name");
//            PropertyInfo phoneProperty = type.GetProperty("Phone");


//            object profile = Activator.CreateInstance(type, "박상현", "512-1234");
//            methodInfo.Invoke(profile, null);
//            //Profile.Print()메서드에 매개변수가 없으므로 null이 오는 것이다.

//            profile = Activator.CreateInstance(type);
//            nameProperty.SetValue(profile, "박찬호", null);
//            phoneProperty.SetValue(profile, "997-5511", null);

//            Console.WriteLine("{0},{1}",
//                nameProperty.GetValue(profile, null),
//                phoneProperty.GetValue(profile, null));


//        }
//    }
//}
