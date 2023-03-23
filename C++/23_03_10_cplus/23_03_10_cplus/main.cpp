#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class First
{
public :
	void FirstFunc()
	{

		cout << "FirstFunc()" << endl;
	}
	virtual void SimpleFunc()
	{

		cout << "First's SimpleFunc()" << endl;
	}


};

class Second : public First
{
public:
	void SecondFunc()
	{
		cout << "SecondFunc()" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "Second's SimpleFunc()" << endl;
	}

};


class Third : public Second
{
public:
	void ThirdFunc()
	{
		cout << "ThirdFunc()" << endl;
	}
	virtual void SimpleFunc()
	{

		cout << "Third's SimpleFUnc()" << endl;
	}


};



int main()
{
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();

	Second & sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();
	
	return 0;

}