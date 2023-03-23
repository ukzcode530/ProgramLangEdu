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
//	printf("학생 이름: %s \n", sptr->name);
//	
//	printf("학생 고유번호 : %s \n", sptr->stdnum);
//	printf("선택 전공 : %s \n", sptr->major);
//	printf("학년: %d \n", sptr->year);
//}
//
//int main(void)
//{
//	Student arr[3];
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("이름 : ");  fgets(arr[i].name,sizeof(arr[i].name),stdin);
//		
//		printf("번호 : ");  fgets(arr[i].stdnum, sizeof(arr[i].stdnum), stdin);
//		
//		printf("학교 : ");  fgets(arr[i].school, sizeof(arr[i].school), stdin);
//		
//		
//		printf("전공 : "); fgets(arr[i].major, sizeof(arr[i].major), stdin);
//		
//		printf("학년 : "); scanf_s("%s", arr[i].year);
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