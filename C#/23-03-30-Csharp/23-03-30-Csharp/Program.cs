using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Interface;
using MultiInterface;
using AbstractClass;
using Property;
using InterFaceProperty;

namespace _23_03_30_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            #region 인터페이스 구현
            //ClimateMonitor monitor = new ClimateMonitor(new FileLogger("MyLog.txt"));
            //monitor.start();
            //IFormattableLogger logger = new ConsolLogger2();
            //logger.WriteLog("The world is not flat");
            //logger.WriteLog("{0} +{1} ={2}", 1, 1, 2);
            #endregion

            #region 다중 인터페이스 상속
            //Flyingcar car = new Flyingcar();
            //car.Run();
            //car.Fly();
            //IRunnable runnable = car as IRunnable;
            //runnable.Run();


            //IFlyable flyable = car as IFlyable;
            //flyable.Fly();

            #endregion

            #region 추상 클래스 AbstractClass

            //AbstractBase Base = new AbstractBase(); // 추상클래스는 동적 인스턴스가 안됨

            //AbstractBase obj = new Derived();
            //obj.AbstractMethodA();
            //obj.PublicMethodA();


            #endregion

            #region Property
            //프로퍼티는 은닉성을 위한 것이다. 원본 필드를 훼손하지 않기 위한것
            //객체의 데이터가 의도 하지 않게 오염되는 것을 막기 위한 것 
            //MyClass obj = new MyClass();
            //obj.MyField = 3;
            //Console.WriteLine(obj.MyField);

            //BirthdayInfo birthdayInfo = new BirthdayInfo();
            //NameCard namecardinfo = new NameCard();
            //namecardinfo.Name = "내이름";
            //namecardinfo.PhoneNumber = "폰번";
            //birthdayInfo.Name = "태양";
            //birthdayInfo.Birthday = new DateTime(1991, 6, 28);
            //Console.WriteLine("Name:{0}",birthdayInfo.Name);
            //Console.WriteLine("Birthday : {0}",birthdayInfo.Birthday.ToShortDateString());
            //Console.WriteLine("Age:{0}",birthdayInfo.Age);
            //Console.WriteLine("Name:{0}",namecardinfo.Name);
            //Console.WriteLine("Numb:{0}", namecardinfo.PhoneNumber);
            #endregion

            #region 무명형식 anonymous Type
            //무명 형식 한번 쓰고 다시는 쓰지 않을 때 쓴다. 의외로 프로젝트 많이 들어감
            //    var a = new { Name = "문동은", Age = 48 };
            //    Console.WriteLine("NAme:{0},Age:{1}", a.Name, a.Age);
            //    var b = new { subject = "수학:", Score = new int[] { 90, 80, 60  } };
            //Console.WriteLine("Subject:{0},Scores:",b.subject);
            //    foreach(var score in b.Score)
            //        Console.Write("{0}",score );
            //  Console.WriteLine();



            #endregion
            #region 인터페이스 프로퍼티 사용 할 수 있다.
            NameValue name = new NameValue()
            {
                Name="이름" , Value = "박찬호"
            };
            NameValue height = new NameValue()
            {
                Name = "키",Value = "187"
            };
            NameValue weight = new NameValue()
            {

                Name = "몸무게",Value = "80kg"

            };
            Console.WriteLine("{0} : {1}",name.Name,name.Value);
            Console.WriteLine("{0} : {1}", height.Name, height.Value);
            Console.WriteLine("{0} : {1}", weight.Name, weight.Value);

            #endregion


        }

    }
    //자동 구현 프로퍼티


    public class NameCard
    {
        string name;
        string phoneNUmber;


        public string Name
        {
            get;
            set;
        }
        public string PhoneNumber
        {

            get; set;
        }

    }




    class BirthdayInfo
    {
        private string name;
        private DateTime birthday;


        //프로퍼티의 장점 메소드 처럼 안전하고 변수처럼 쉽게 접근
        public string Name
        {
            get;
            set;
      
        }
        public DateTime Birthday
        {
            get;
            set;
          
        }
        public int Age
        {
            get { return new DateTime(DateTime.Now.Subtract(birthday).Ticks).Year; }
        }
    }


}
