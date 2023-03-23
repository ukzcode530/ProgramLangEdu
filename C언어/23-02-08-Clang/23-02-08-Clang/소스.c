#include <stdio.h>

//void Recursive(int num)
//{
//	if (num <= 0) // 재귀의 탈출조건
//		return; // 재귀의 탈출!
//	printf("Recursive call! %d", num);
//	Recursive(num - 1);
//
//
//
//}

//int Factorial(int n)
//{
//	/*if (n == 0)
//		return 1;
//	else
//		return n * Factorial(n - 1);*/
//
//}


int main()
{

	//Recursive(5);



	//printf("1! = %d \n", Factorial(1));
	//printf("2! = %d \n", Factorial(2));
	//printf("3! = %d \n", Factorial(3));
	//printf("4! = %d \n", Factorial(4));
	//printf("9! = %d \n", Factorial(9));

	//int oneDimArr[4];

	/*int arr[5];
	int sum = 0, i;*/

	//int arr1[5] = { 1,2,3,4,5 };
	//int arr2[] = { 1,2,3,4,5,6,7 };
	//int arr3[5] = { 1, 2 };
	//int ar1Len, ar2Len, ar3Len, i;

	//printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
	//printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	//printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

	//ar1Len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이 계산
	//ar2Len = sizeof(arr2) / sizeof(int); // 배열 arr2의 길이 계산
	//ar3Len = sizeof(arr3) / sizeof(int); // 배열 arr3의 길이 계산

	//for (i = 0; i < ar1Len; i++)
	//	printf("%d", arr1[i]);
	//printf("\n");

	//for (i = 0; i < ar2Len; i++)
	//	printf("%d", arr2[i]);
	//printf("\n");

	//for (i = 0; i < ar3Len; i++)
	//	printf("%d", arr3[i]);
	//printf("\n");




	//char str[] = "Good morning!";
	//printf("배열 str의 크기 : %d \n", sizeof(str));
	//printf("널 문자 문자형 출력 : %c \n", str[13]);
	//printf("널 문자 정수형 출력 : %d \n", str[13]);


	//str[12] = "?"; // 배열 str에 저장된 문자열 데이터는 변경 가능!
	//printf("문자열 출력: %s \n", str);
	//


	//char str[50];
	//int idx = 0;
	//printf("문자열 입력 : ");
	//scanf_s("%s", str, sizeof(str));
	//printf("입력 받은 문자열 출력 : %s \n",str);
	//printf("\n");
	//printf("문자 단위 출력 : ");
	//while (str[idx] != '\0')
	//{
	//	printf("%c", str[idx]);
	//	idx++;
	//}
	//printf("\n");


	//char str[50];
	//int idx = 0;
	//
	//printf("영어 단어 입력 : "),scanf_s("%s",str,sizeof(str));
	//while (str[idx] != 0)
	//{

	//	idx++;

	//}
	//printf("입력 한 영어단어 길이는 : %d \n", idx);
	//for (int i = 0; i < idx / 2; i++)
	//{
	//	char temp = str[i];
	//	str[i] = str[(idx = i) - 1];
	//	str[(idx - i) - 1] = temp;


	//}
	//printf("뒤집힌 영단어 : %s \n", str);

	//char str[50];
	//int idx = 0;
	//char max = 0;
	//printf("영어 단어 입력 : "), scanf_s("%s", &str, sizeof(str));
	//while (str[idx] != 0)
	//{

	//	idx++;
	//}
	//printf("입력 한 영어 단어 길이는 : %d \n", idx);
	//for (int i = 0; i < idx / 2; i++)
	//{
	//	char temp = str[i];
	//	str[i] = str[(idx - i) - 1];
	//	str[(idx - i) - 1] = temp;

	//}

char str[50];
int idx = 0;
char max = 0;
printf("영어 단어 입력 : "), scanf_s("%s", &str, sizeof(str));
while (str[idx] != 0)
{

	idx++;
}
printf("입력 한 영어 단어 길이는 : %d \n", idx);
for (int i = 0; i < idx; i++)
{
	if (max < str[i])
		max = str[i];

	printf("가장 큰 아스키 코드값의 문자: %c \n", max); 

}



	//char str[50] = "I like C programming";
	//printf("string : %s \n", str);

	//str[8] = '\0'; // 9번째 요소에 널 문자 저장
	//printf("string: %s \n", str);

	//str[6] = '\0'; // 6번째 요소에 널 문자 저장
	//printf("string: %s \n", str);

	//str[1] = '\0'; // 2번째 요소에 널 문자 저장
	//printf("string: %s \n", str);

	/*int arr[5];
	int sum = 0;
	int min = 0;
	int max = 0;
	int i = 0;

	for (int i = 0; i < 5; i++) {
		int num;
		scanf_s("%d", &num);
		arr[i] = num;
		sum += arr[i];

	}
	max = min = sum = arr[0];

	for (int i = 0; i < 5; i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}
		if (min >= arr[i]) {
			min = arr[i];
		}
	}
	sum += arr[i];

	printf("최댓값: %d \n최솟값: %d \n총 합: %d \n", max, min, sum);*/

//char str[10] = "Good time";
//printf("string: %s \n", str);
//
//
//
//
//	return 0;


//arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	/*for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 10;

	for (i = 0; i < 5; i++)
		sum += arr[i];

  
	printf("배열요소에 저장된 값의 합 : %dn", sum);*/


	return 0;
}