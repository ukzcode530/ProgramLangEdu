#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//������ 1���� 50������ ����
// 2���� �迭�� ���� 5 ���� 5��
//���� ���� ���� ¦���� ��� �Ͻÿ�


       //���ڿ���,//���ڿ��� ���޹��� �Ű�����

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
	printf("���޵� ���ڿ��� ��: %d \n", argc);


	while (argv[i] != NULL)

	{

		printf("%d��° ���ڿ�: %s \n", i + 1, argv[i]);
		i++;

	}


	//printf("���޵� ���ڿ��� �� : %d \n", argc);
	//for (int i = 0; i < argc; i++)
	//	printf("%d��° ���ڿ� : %s \n", i + 1, argv[i]);
	  
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
	///*�Լ� ������ ������ ���� ȣ�� */

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

	//int* whoA[4] = { &num1, &num2, &num3, &num4 }; // ������ �迭
	//int(*whoB)[4] = arr2d; // �迭 ������

	//printf("%d %d %d %d \n", **(whoA+0), **(whoA+1), **(whoA+2), **(whoA+3));

	//for (i = 0; i < 2; i++)
	//{

	//	for (j = 0; j < 4; j++)
	//		printf("%d", whoB[i][j]);
	//	printf("\n");

	//}



}
