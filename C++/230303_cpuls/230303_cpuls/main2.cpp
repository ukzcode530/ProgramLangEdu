//#include "default.h"
//
//class SoSimple
//{
//	int num;
//
//public :
//		SoSimple(int n) : num(n)
//	{
//		cout << "num=" << num << ",";
//		cout << "address" << this << endl;
//
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//
//
//	}
//	SoSimple * GetThisPoint()
//	{
//		return this;
//	}
//
//};
//
//
////class TwoNumber
////{
////private:
////	int num1;
////	int num2;
////public :
////	/*TwoNumber(int num1, int num2)
////	{
////		this->num1 = num1;
////		this->num2 = num2;
////	}*/
////
////	TwoNumber(int num1, int num2)
////		: num1(num1), num2(num2)
////	{
////		// empty
////	}
////
////	void ShowTwoNumber()
////	{
////		cout << this->num1 << endl;
////		cout << this->num2 << endl;
////	}
////
////};
//
//
//int main()
//{
//	SoSimple sim1(100);
//	SoSimple * ptr1 = sim1.GetThisPoint();
//	cout << ptr1 << ",";
//	ptr1 -> ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple* ptr2 = sim2.GetThisPoint();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//
//
//	return 0;
//}