#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>


int Bubblesort(int ar[], int n)
{
	int i, j, temp;
	for (i = n - 1; i >= 0; i--) {
		for (j = 0; j < 1; j++) {
			if (ar[j] > ar[j + 1]) {

				temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;

			}


		}
	}
	int index = Bsearch(ar, sizeof(ar) / sizeof(int), 7);

	return index;

}

int Bsearch(int ar[], int len, int target)
{
	int first = 0; // 탐색 대상의 시작 인덱스 값
	int last = len - 1; // 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first <= last) / 2;

		if (target == ar[mid])
		{
			return mid;

		}
		else // 타겟이 아니라면
			if (target < ar[mid])
				last = mid - 1; // 뒷부분을 탐색 대상에서 제외
			else
				first = mid + 1; // 앞부분을 탐색 대상에서 제외

	}

	return -1; // 찾지 못했을때 반환되는 값 -1
}



int main()
{                     //이진탐색 알고리즘을 하기 위해선  정렬이 되어 있어야 한다.
					  // 버블 정렬 후 이진 탐색 알고리즘을 진행 해야 한다.

	srand(time(NULL));
	int arr[100];
	int idx;
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand();

	}

	Bubblesort(arr, n);


	idx = Bsearch(arr, n, 7);
	if (idx == -1)
		printf("탐색실패!!!\n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패!!!\n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);

	return 0;
}