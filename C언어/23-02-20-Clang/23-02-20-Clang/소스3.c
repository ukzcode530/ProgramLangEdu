//#include <stdio.h>
//#include <string.h>
//typedef struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//
//
//
//} Person;
//
//void ShowPersonInfo(Person man)
//{
//	printf("name : %s \n", man.name);
//	printf("phone : %s \n", man.phoneNum);
//	printf("age: %d \n", man.age);
//}
//
//Person ReadPersonINfo(void)
//{
//	Person man;
//	printf("name? "); fgets(man.name, sizeof(man.name), stdin);
//	man.name[strlen(man.name) - 1] = NULL;
//	printf("phone? "); fgets(man.phoneNum, sizeof(man.phoneNum), stdin);
//	man.phoneNum[strlen(man.phoneNum) - 1] = NULL;
//	printf("age?"); scanf_s("%d", &man.age);
//	return man;
//}
//
//int main ()
//{
//	Person man = ReadPersonINfo();
//	ShowPersonInfo(man);
//	return 0;
//}