//#include<stdio.h>;
//
//
//typedef struct student
//
//{
//	char name[20];
//	char stdnum[20];
//	char school[20];
//	char major[20];
//	int year;
//
//
//
//} Student;
//
//void ShowStudentInfo(Student* sptr)
//{
//	printf("�л� �̸�: %s \n", sptr->name);
//	
//	printf("�л� ������ȣ : %s \n", sptr->stdnum);
//	printf("���� ���� : %s \n", sptr->major);
//	printf("�г�: %d \n", sptr->year);
//}
//
//int main(void)
//{
//	Student arr[3];
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("�̸� : ");  fgets(arr[i].name,sizeof(arr[i].name),stdin);
//		
//		printf("��ȣ : ");  fgets(arr[i].stdnum, sizeof(arr[i].stdnum), stdin);
//		
//		printf("�б� : ");  fgets(arr[i].school, sizeof(arr[i].school), stdin);
//		
//		
//		printf("���� : "); fgets(arr[i].major, sizeof(arr[i].major), stdin);
//		
//		printf("�г� : "); scanf_s("%s", arr[i].year);
//		while (getchar() != '\n');
//		
//
//	}
//
//	for (i = 0; i < 3; i++)
//		ShowStudentInfo(&arr[i]);
//
//	return 0;
//}