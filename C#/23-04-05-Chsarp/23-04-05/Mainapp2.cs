//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace _23_04_05
//{
//    //델리게이트 체인
//    delegate void Notify(string message);
//    class Notifier
//    {
//        public Notify EventOccured;
//    }
//    class EventListner
//    {
//        private string name;
//        public EventListner(string name)
//        {
//            this.name = name;
//        }
//        public void SomthingHappend(string message)
//        {
//            Console.WriteLine("{0}.SomthingHappend : {1}",name,message);

//        }
        
//    }

//    internal class Mainapp2
//    {
//      static void Main(string[] args)
//        {
//            Notifier notifier = new Notifier();

//            EventListner listner1 = new EventListner("Listner1");
//            EventListner listner2 = new EventListner("Listner2");
//            EventListner listner3 = new EventListner("Listner3");
       

//            notifier.EventOccured += listner1.SomthingHappend;
//            notifier.EventOccured += listner2.SomthingHappend;
//            notifier.EventOccured += listner3.SomthingHappend;
//            notifier.EventOccured("You've got mail");
//            Console.WriteLine();
//            notifier.EventOccured -= listner2.SomthingHappend;
//            notifier.EventOccured("Download Complate");
//            Console.WriteLine();
//            notifier.EventOccured = new Notify(listner2.SomthingHappend)
//                + new Notify(listner3.SomthingHappend);
//            notifier.EventOccured("Nuclear launch detected");
//            Console.WriteLine();

//            Notify notify1 = new Notify(listner1.SomthingHappend);
//            Notify notify2 = new Notify(listner2.SomthingHappend);

//            notifier.EventOccured = (Notify)Delegate.Combine(notify1, notify2);
//            notifier.EventOccured("Fire");
//            Console.WriteLine();
//            notifier.EventOccured = (Notify)Delegate.Remove(notifier.EventOccured, notify2);
//            notifier.EventOccured("RPG");

//        }


//    }


//}
