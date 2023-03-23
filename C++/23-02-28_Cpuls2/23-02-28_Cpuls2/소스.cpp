#include<iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;


int main()
{
	srand((int)time(NULL)); //시드값 부여 time함수로 현재값으로 부여
	cout << "랜덤 값: " << rand() << endl;
	cout << "랜덤 값: " << rand() << endl;
	cout << "랜덤 값: " << rand() << endl;
	cout << "랜덤 값: " << rand() << endl;
	cout << "랜덤 값: " << rand() << endl;

	return 0;
}