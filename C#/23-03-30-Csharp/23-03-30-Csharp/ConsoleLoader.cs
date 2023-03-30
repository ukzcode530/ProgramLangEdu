using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Interface
{
//    interface ILogger  //인터페이스에서는 선언만 가능 상속받은 클래스에서 반드시 정의
//{

//        void WriteLog(string message); //선언부만 있다.
//}
// interface IFormattableLogger : ILogger
//    {
//        void WriteLog(string format, params object[] args);
//    }

//    class ConsolLogger2 : IFormattableLogger //상속 한다.
//    {
//        public void WriteLog(string format, params object[] args)
//        {
//            String message = String.Format(format, args);
//            Console.WriteLine("{0} {1}",DateTime.Now.ToLocalTime(),message);

//        }

//        public void WriteLog(string message)
//        {
//            Console.WriteLine("{0} {1}",DateTime.Now.ToLocalTime(),message);
//        }
//    }

//    class ConsoleLoader : ILogger
//    {

//        public void WriteLog(string message)
//        {
//            Console.WriteLine("{0},{1}",DateTime.Now.ToLocalTime(),message);
//        }
//    }


//    class FileLogger : ILogger

//    {
//        private StreamWriter writer;
//        public FileLogger(string path)
//        {

//            writer = File.CreateText(path);
//            writer.AutoFlush = true; // qjvjqldnrl
//        }

//        public void WriteLog(string messgae)
//        {
//            writer.WriteLine("{0}{1}", DateTime.Now.ToShortTimeString(), messgae);

//        }

//    }
//    class ClimateMonitor
//    {
//        private ILogger logger;
//        public ClimateMonitor(ILogger logger)
//        {
//            this.logger = logger;

//        }

//        public void start()
//        {
//            while(true)

//            {
//                //Console.WriteLine("온도를 입력해주세요 ");
//                string temperature = Console.ReadLine();
//                if (temperature == "")
//                    break;
//                logger.WriteLog("현재온도:" + temperature);

//            }
//        }

//    }
}
