#include<iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;


int main()
{
	srand((int)time(NULL)); //�õ尪 �ο� time�Լ��� ���簪���� �ο�
	cout << "���� ��: " << rand() << endl;
	cout << "���� ��: " << rand() << endl;
	cout << "���� ��: " << rand() << endl;
	cout << "���� ��: " << rand() << endl;
	cout << "���� ��: " << rand() << endl;

	return 0;
}