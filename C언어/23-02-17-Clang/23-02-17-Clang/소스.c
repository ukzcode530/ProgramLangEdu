#include <stdio.h> // 표준입출력 헤더파일 scanf_s() printf()
#include <stdlib.h> //표준라이브러리 헤더파일 rand() srand() RAND_MAX
#include <string.h> // strlen() strcpy_s() strncpy_s() strcat_s() strncat_s()
#include <math.h> //수학관련                         // strcmp() strncmp()
//struct point // 구조체 point 의 정의
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
이름
주민등록번호
급여정보

필요함수 : scanf_s  printf??

1.구조체변수 선언
2.입력해서 구조체변수를 채움
3.그걸출력 */

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
		printf("이름입력 : \n");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("주민등록번호입력 : \n");
		fgets(arr[i].Cnumber, sizeof(arr[i].Cnumber), stdin);
		printf("급여입력 : \n");
		scanf_s("%d", &arr[i].pay);
		while (getchar() != '\n');

	}
	for (int i = 0; i < 3; i++)
	{

		printf("이름 : %s, 주민등록번호 : %s, 급여: %d \n", arr[i].name, arr[i].Cnumber, arr[i].pay);*/

	/*}*/
	//정보 입력


	//정보 출력
	
	 // 2번째 입력정보에 에러사항이 있어 사용, 입력버퍼에서 개행문자를 제거하는 용도



	//printf("이름 입력 : "); fgets(man2.name, sizeof(man2.name), stdin);//scanf_s("%s", man2.name, sizeof(man2.name));
	//man2.name[strlen(man2.name) - 1] = NULL;
	//printf("번호 입력 : "); fgets(man2.phoneNum, sizeof(man2.phoneNum), stdin);//scanf_s("%s", man2.phoneNum, sizeof(man2.phoneNum));
	//printf("나이 입력: "); scanf_s("%d", &(man2.age));


	//struct point pos1 = { 1, 1 };
	//struct point pos2 = { 2, 2 };
	//struct point pos3 = { 3, 3 };
	//pos1.ptr = &pos2; // pos1과 pos2를 연결
	//pos2.ptr = &pos3; // pos2와 pos3를 연결
	//pos3.ptr = &pos1; // pos3를 pos1과 연결 
	//printf("점의 연결관계... \n");
	//printf("[%d, %d]와(과) [%d, %d] 연결 \n");
	//   pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	//   printf("[%d, %d]와(과) [%d,%d] 연결 \n",
	//	   pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	 /*  return 0;*/



	/*struct point cen = { 2, 7 };
	double rad = 5.5;
	struct circle ring = { rad, &cen };
	printf("원의 반지름; %g \n", ring.radius);
	printf("원의 중심 [%d,%d] \n ", (ring.center)->xpos, (ring.center)->ypos);*/

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

	//	{"이승기", "010-1212-0001", 21}, // 첫 번째 요소의 초기화
	//	{"정지영", "010-1313-0002", 22}, // 두 번째 요소의 초기화
	//	{"한지수", "010-1717-0003", 19} // 세번째 요소의 초기화
	//};

	//int i;
	//for (i = 0; i < 3; i++)
	//	printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	//return 0;


	/*struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력 : ");
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);

	}
	for (i = 0; i < 3; i++)
	{
		printf("[%d,%d]", arr[i].xpos, arr[i].ypos);

		return 0;
	}*/


	/*struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1212-0001",21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phoneNum, man.age);*/
	//return 0;

	//struct person man1, man2;
	//strcpy_s(man1.name,sizeof(man1.name), "안성준");
	//strcpy_s(man1.phoneNum,sizeof(man1.phoneNum),"010-1122-3344");
	//man1.age = 23;
	//printf("이름 입력 : "); fgets(man2.name, sizeof(man2.name), stdin);//scanf_s("%s", man2.name, sizeof(man2.name));
	//man2.name[strlen(man2.name) - 1] = NULL;
	//printf("번호 입력 : "); fgets(man2.phoneNum, sizeof(man2.phoneNum), stdin);//scanf_s("%s", man2.phoneNum, sizeof(man2.phoneNum));
	//printf("나이 입력: "); scanf_s("%d", &(man2.age));

	//printf("이름: %s \n", man1.name);
	//printf("번호: %s \n", man1.phoneNum);
	//printf("나이 : %d \n", man1.age);

	//printf("이름 : %s \n", man2.name);
	//printf("번호 : %s \n", man2.phoneNum);
	//printf("나이 : %d \n", man2.age);

	

	//struct point pos1, pos2;
	//double distance;
	//fputs("point1 pos : ", stdout);
	//scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

	//fputs("point2 pos: ", stdout);
	//scanf_s("%d %d", &pos2.xpos, &pos2.ypos);

	///* 두 점간의 거리 계산 공식 */
	//distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
	//	(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));


	//printf("두 점의 거리는 %g 입니다. \n", distance);


}