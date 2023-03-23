#include<stdio.h> // 표준 입출력 헤더파일
#include<stdlib.h> // 표준 라이브러리 헤더파일
#include<time.h> //시간 


int main()
{
	///*double num = 3.14;
	//double* ptr = &num;
	//double* ptr2 = ptr;
	//double** ptr3 = &ptr;
	//double** ptr4 = ptr3;*/

	//double num = 3.14;
	//double* ptr = &num;
	//double** dptr = &ptr;
	//double* ptr2;

	//printf("%9p %9p \n", ptr, *dptr);
	//printf("%9g %9g \n", num, **dptr);
	//ptr2 = *dptr; // ptr2 = ptr 과 같은 문장

	//*ptr2 = 10.99;
	//printf("%9g %9g \n", num, **dptr);

	//int num1 = 10, num2 = 20;
	//int* ptr1, * ptr2;
	//ptr1 = &num1, ptr2 = &num2;
	//printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	//SwapIntPtr(&ptr1, &ptr2);
	//printf("*ptr1, *ptr2: %d %d \n", * ptr1, *ptr2);

	/*int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 };
	int** dptr = ptrArr;

	printf("%d %d %d \n", **(ptrArr+0), **(ptrArr+1), **(ptrArr+2));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));*/


	/*int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d \n", **dptr, ***tptr);*/


	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d) : %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d \n", sizeof(arr2d[0]));
	pirntf("sizeof(arr2d[1]) : %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d \n", sizeof(arr2d[2]));

	return 0;
}





