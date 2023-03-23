//#include "default.h"
//
//class SelfRef
//{
//private:
//	int num;
//public :
//	SelfRef(int n) : num(n)
//	{
//
//		cout << "객체생성" << endl;
//
//	}
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//		// 반환형이 SelfRef& 으로 선언되었다면
//		// 객체 자신을 참조 할수 있는 참조의 정보(참조값)이 반환 된다.
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//
//};
//
//int main(void)
//{
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}