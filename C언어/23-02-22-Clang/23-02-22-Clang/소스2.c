#include<stdio.h>
#include<stdlib.h>;
#include<time.h>;

//#define NAME   "ȫ�浿"
//#define AGE    24
//#define PRINT_ADDR  puts("�ּ�: ��⵵ ���ν�\n"); 

//char name[30];

//char* ReadUserName(void) // ���� �Ҵ��ϴ� ���� 1.�Լ� ȣ���� �������� �޸𸮴� 
//{                        // ������� �ʾƾ� �ϰ� 2.�Լ��� ȣ���Ҷ����� ���Ӱ� �޸�
//	                     // �Ҵ� �Ǿ�� �Ѵ�.
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name?");
//	fgets(name,sizeof(name),stdin);
//	return name;
//}

typedef struct point
{
	int xpos;
	int ypos;


} Point;


void SwapPoint(Point* pos1, Point* pos2 )
{
	Point temp = { 0,0 };

	temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;

}


int main()
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);

	printf("pos1: %d %d\n", pos1.xpos, pos1.ypos);
	printf("pos2: %d %d\n", pos2.xpos, pos2.ypos);
	/*double rad = 2.1;
	printf("������ %g�� ���� ���� : %g \n", rad, CRICLE_AREA(rad));*/

	/*printf("�� ���� �� : %d \n", DIFF_ABS(5, 7));
	printf("�� ���� �� : %g \n", DIFF_ABS(1.8, -1.4));

	return 0;*/


	//int num = 20;

	///* ������ ��� ��� */

	//printf("Square of num: %d \n", SQUARE(num));
	//printf("Square of -5: %d \n", SQUARE(-5));
	//printf("Square of 2.5: %g \n", SQUARE(2.5));

	///* �������� ��� ��� */
	//printf("Square of 3+2: %d \n", SQUARE(3 + 2));
	//return 0;


	//printf("�̸�: %s \n", NAME);
	//printf("���� : %d \n", AGE);
	//PRINT_ADDR;
	//return 0;

	/*char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	free(name1);
	free(name2);*/

	//int arrlen = 5;
	//int idx = 0;
	//int* arr = (int*)malloc(sizeof(int) * arrlen);
	//while (1)
	//{

	//	printf("�����Է� : ");
	//	scanf_s("%d", &arr[idx]);
	//	if (arr[idx] == -1 )
	//	   break;
	//	if (arrlen == idx + 1) //�迭�� Ȯ�� �ʿ伺 �˻�
	//	{
	//		arrlen += 3;
	//		arr = (int*)relloc(arr, sizeof(int) * arrlen);

	//	}
	//}
	//for (int i = 0; i < idx; i++)
	//	printf("%d ", arr[i]);
	//free(arr);



}