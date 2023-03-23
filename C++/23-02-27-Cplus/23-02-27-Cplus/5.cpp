#include <iostream>

using namespace std;


void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
} // Call-by-reference

int main()
{
	int val1 = 10;
	int val2 = 20;
	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;



	/*int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;*/



	//int arr[3] = { 1,3,5 };
	//int &ref1 = arr[0];
	//int &ref2 = arr[1];
	//int &ref3 = arr[2];

	//cout << &ref1 << endl;
	//cout << arr[0] << endl;
	//cout << &ref2 << endl;
	//cout << arr[1] << endl;
	//cout << &ref3 << endl;
	//cout << arr[2] << endl;
	//
	



/*	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;
	cout << " VAL: " << &num1 << endl;
	cout << "REF : " << &num2 << endl; */

	return 0;
}