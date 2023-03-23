#include "default.h"


class SoSimple
{
private :
	int num;
public :
	SoSimple(int n) : num()
	{
		cout << "New Object: " << this << endl;

	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;

	}
	~SoSimple()
	{

		cout << "Destroy obj:" << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;

}


int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempREf = SimpleFuncObj(obj);
	cout << "Return Obj" << &tempREf << endl;

	return 0;
}