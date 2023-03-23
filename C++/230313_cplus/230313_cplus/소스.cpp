#include <iostream>
#include <cstring>

using namespace std;

class Base
{
public:
	Base() { cout << "Base Constructor" << endl; }
	void SimpleFunc() { cout << "BaseOne" << endl; }


};

class MiddleDrivedOne : virtual public Base
{
public:
	MiddleDrivedOne() : Base()
	{

		cout << "MiddleDrivedOne Constructor" << endl;
	}
	void MIddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleDrivedOne" << endl;
	}

};

class MiddleDrivedTwo : virtual public Base
{
public:
	MiddleDrivedTwo() : Base()
	{
		cout << "MiddleDrivedTwo Constructor" << endl;

	}
	void MiddleFUncTwo()
	{
		SimpleFunc();
		cout << "MiddleDrivedTwo" << endl;
	}

};

class LastDerived : public MiddleDrivedOne, public MiddleDrivedTwo
{
public:
	LastDerived() : MiddleDrivedOne(), MiddleDrivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MIddleFuncOne();
		MiddleFUncTwo();
		SimpleFunc();
	}

};

int main()
{
	cout << "��ü���� ��......" << endl;
	LastDerived idr;
	cout << "��ü���� �� ......" << endl;
	idr.ComplexFunc();
	return 0;
}