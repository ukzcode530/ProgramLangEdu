#include <stdio.h> // ǥ������� ������� scanf_s() printf()
#include <stdlib.h> //ǥ�ض��̺귯�� ������� rand() srand() RAND_MAX
#include <string.h> // strlen() strcpy_s() strncpy_s() strcat_s() strncat_s()
#include <math.h> //���а���                         // strcmp() strncmp()
//struct point // ����ü point �� ����
//{
//	int xpos;
//	int ypos;
//
//};

//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//	
//
//};

//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//
//};




//typedef struct point
//{
//	int xpos;
//	int ypos;
//	/*struct point* ptr;*/
//
//}Point;
//
//typedef struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//
//
//}Person;


//struct circle
//{
//	double radius;
//	struct point* center;
//
//};

/*employee
�̸�
�ֹε�Ϲ�ȣ
�޿�����

�ʿ��Լ� : scanf_s  printf??

1.����ü���� ����
2.�Է��ؼ� ����ü������ ä��
3.�װ���� */

//struct employee
//{
//	char name[20];
//	char Cnumber[14];
//	int pay;
//
//
//};
void ShowArr(int(*arr)[4])
{
	int i, j;
	printf("----Show Array-----\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", arr[i][j]);

		printf("\n");
	}
	printf("\n");
}


void RotateArr(int(*arr)[4])
{
	int i, j;
	int temp[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			temp[j][3 - i] = arr[i][j];

	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			arr[i][j] = temp[i][j];

	}

}


void ShowArr(int(*arr)[4]);
void RotateArr(int(*arr)[4]);

int main()
{
	int i = 0;

	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
	};

	for (i = 0; i < 4; i++)
	{
		ShowArr(arr);
		RotateArr(arr);

	}

	return 0;


	/*struct employee arr[3];
	for (int i = 0; i < 3; i++)
	{
		printf("�̸��Է� : \n");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("�ֹε�Ϲ�ȣ�Է� : \n");
		fgets(arr[i].Cnumber, sizeof(arr[i].Cnumber), stdin);
		printf("�޿��Է� : \n");
		scanf_s("%d", &arr[i].pay);
		while (getchar() != '\n');

	}
	for (int i = 0; i < 3; i++)
	{

		printf("�̸� : %s, �ֹε�Ϲ�ȣ : %s, �޿�: %d \n", arr[i].name, arr[i].Cnumber, arr[i].pay);*/

	/*}*/
	//���� �Է�


	//���� ���
	
	 // 2��° �Է������� ���������� �־� ���, �Է¹��ۿ��� ���๮�ڸ� �����ϴ� �뵵



	//printf("�̸� �Է� : "); fgets(man2.name, sizeof(man2.name), stdin);//scanf_s("%s", man2.name, sizeof(man2.name));
	//man2.name[strlen(man2.name) - 1] = NULL;
	//printf("��ȣ �Է� : "); fgets(man2.phoneNum, sizeof(man2.phoneNum), stdin);//scanf_s("%s", man2.phoneNum, sizeof(man2.phoneNum));
	//printf("���� �Է�: "); scanf_s("%d", &(man2.age));


	//struct point pos1 = { 1, 1 };
	//struct point pos2 = { 2, 2 };
	//struct point pos3 = { 3, 3 };
	//pos1.ptr = &pos2; // pos1�� pos2�� ����
	//pos2.ptr = &pos3; // pos2�� pos3�� ����
	//pos3.ptr = &pos1; // pos3�� pos1�� ���� 
	//printf("���� �������... \n");
	//printf("[%d, %d]��(��) [%d, %d] ���� \n");
	//   pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	//   printf("[%d, %d]��(��) [%d,%d] ���� \n",
	//	   pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	 /*  return 0;*/



	/*struct point cen = { 2, 7 };
	double rad = 5.5;
	struct circle ring = { rad, &cen };
	printf("���� ������; %g \n", ring.radius);
	printf("���� �߽� [%d,%d] \n ", (ring.center)->xpos, (ring.center)->ypos);*/

	/*return 0;*/

	/*struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;


	pptr -> xpos += 4;
	pptr -> ypos += 5;

	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 5;

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;

	printf("[%d, %d] \n", pptr-> xpos, pptr ->ypos);*/
	/*return 0;*/




	//struct person arr[3] = {

	//	{"�̽±�", "010-1212-0001", 21}, // ù ��° ����� �ʱ�ȭ
	//	{"������", "010-1313-0002", 22}, // �� ��° ����� �ʱ�ȭ
	//	{"������", "010-1717-0003", 19} // ����° ����� �ʱ�ȭ
	//};

	//int i;
	//for (i = 0; i < 3; i++)
	//	printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	//return 0;


	/*struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���� ��ǥ �Է� : ");
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);

	}
	for (i = 0; i < 3; i++)
	{
		printf("[%d,%d]", arr[i].xpos, arr[i].ypos);

		return 0;
	}*/


	/*struct point pos = { 10, 20 };
	struct person man = { "�̽±�", "010-1212-0001",21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phoneNum, man.age);*/
	//return 0;

	//struct person man1, man2;
	//strcpy_s(man1.name,sizeof(man1.name), "�ȼ���");
	//strcpy_s(man1.phoneNum,sizeof(man1.phoneNum),"010-1122-3344");
	//man1.age = 23;
	//printf("�̸� �Է� : "); fgets(man2.name, sizeof(man2.name), stdin);//scanf_s("%s", man2.name, sizeof(man2.name));
	//man2.name[strlen(man2.name) - 1] = NULL;
	//printf("��ȣ �Է� : "); fgets(man2.phoneNum, sizeof(man2.phoneNum), stdin);//scanf_s("%s", man2.phoneNum, sizeof(man2.phoneNum));
	//printf("���� �Է�: "); scanf_s("%d", &(man2.age));

	//printf("�̸�: %s \n", man1.name);
	//printf("��ȣ: %s \n", man1.phoneNum);
	//printf("���� : %d \n", man1.age);

	//printf("�̸� : %s \n", man2.name);
	//printf("��ȣ : %s \n", man2.phoneNum);
	//printf("���� : %d \n", man2.age);

	

	//struct point pos1, pos2;
	//double distance;
	//fputs("point1 pos : ", stdout);
	//scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

	//fputs("point2 pos: ", stdout);
	//scanf_s("%d %d", &pos2.xpos, &pos2.ypos);

	///* �� ������ �Ÿ� ��� ���� */
	//distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
	//	(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));


	//printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);


}