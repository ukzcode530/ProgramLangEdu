#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//랜덤값 1에서 50사이의 값을
// 2차원 배열에 행이 5 열이 5인
//곳에 저장 한후 짝수만 출력 하시오


       //문자열수,//문자열을 전달받을 매개변수

//void ShowAllString(int argc, char* argv[])
//{
//	int i;
//		for (i=0; i < argc; i++)
//			printf("%s \n", argv[i]);
//
//
//}


int main(int argc, char *argv[])
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);


	while (argv[i] != NULL)

	{

		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
		i++;

	}


	//printf("전달된 문자열의 수 : %d \n", argc);
	//for (int i = 0; i < argc; i++)
	//	printf("%d번째 문자열 : %s \n", i + 1, argv[i]);
	  
	//char* str[3] = {
	//	"C Programming",
	//	"C++ Programming",
	//	"JAVA Programming"
	//};
	//ShowAllString(3, str);
		return 0;

	//char* str = "Function Pointer";
	//int num1 = 10, num2 = 20;

	//void (*fptr1)(int, int) = SimpleAdder;
	//void(*fptr2) (char*) = ShowString;
 //   
	///*함수 포인터 변수에 의한 호출 */

	//fptr1(num1, num2);
	//fptr2(str);





	
	return 0;



	//int arr2D[2][4] =
	//{
	//	{1,2,3,4}
	//{5,6,7,8};

	//}


	//int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	//int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	//int i, j;

	//int* whoA[4] = { &num1, &num2, &num3, &num4 }; // 포인터 배열
	//int(*whoB)[4] = arr2d; // 배열 포인터

	//printf("%d %d %d %d \n", **(whoA+0), **(whoA+1), **(whoA+2), **(whoA+3));

	//for (i = 0; i < 2; i++)
	//{

	//	for (j = 0; j < 4; j++)
	//		printf("%d", whoB[i][j]);
	//	printf("\n");

	//}



}
