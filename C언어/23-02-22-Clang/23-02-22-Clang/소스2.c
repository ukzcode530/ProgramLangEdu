#include<stdio.h>
#include<stdlib.h>;
#include<time.h>;

//#define NAME   "홍길동"
//#define AGE    24
//#define PRINT_ADDR  puts("주소: 경기도 용인시\n"); 

//char name[30];

//char* ReadUserName(void) // 동적 할당하는 이유 1.함수 호출이 끝나더라도 메모리는 
//{                        // 사라지지 않아야 하고 2.함수를 호출할때마다 새롭게 메모리
//	                     // 할당 되어야 한다.
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
	printf("반지름 %g인 원의 넓이 : %g \n", rad, CRICLE_AREA(rad));*/

	/*printf("두 값의 차 : %d \n", DIFF_ABS(5, 7));
	printf("두 값의 차 : %g \n", DIFF_ABS(1.8, -1.4));

	return 0;*/


	//int num = 20;

	///* 정상적 결과 출력 */

	//printf("Square of num: %d \n", SQUARE(num));
	//printf("Square of -5: %d \n", SQUARE(-5));
	//printf("Square of 2.5: %g \n", SQUARE(2.5));

	///* 비정상적 결과 출력 */
	//printf("Square of 3+2: %d \n", SQUARE(3 + 2));
	//return 0;


	//printf("이름: %s \n", NAME);
	//printf("나이 : %d \n", AGE);
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

	//	printf("정수입력 : ");
	//	scanf_s("%d", &arr[idx]);
	//	if (arr[idx] == -1 )
	//	   break;
	//	if (arrlen == idx + 1) //배열의 확장 필요성 검사
	//	{
	//		arrlen += 3;
	//		arr = (int*)relloc(arr, sizeof(int) * arrlen);

	//	}
	//}
	//for (int i = 0; i < idx; i++)
	//	printf("%d ", arr[i]);
	//free(arr);



}