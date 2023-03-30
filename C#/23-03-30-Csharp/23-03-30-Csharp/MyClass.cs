using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Property
{
    class MyClass
    {
        private int myField;
        //public int GetMyField() { return myField; }
        //public void SetMyField(int value)
        //{
        //    myField = value;
        //}
        public int MyField //프로퍼티 
        {
            get { return myField; }
            set { myField = value; }

        }

    }
}
