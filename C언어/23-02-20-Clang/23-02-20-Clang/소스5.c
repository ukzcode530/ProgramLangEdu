//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//#include<string.h>
//
//int Lsearch(int ar[], int len, int target)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (ar[i] == target)
//			return i;
//
//	}
//
//	return -1;
//}
//
//int Bsearch(int ar[], int len, int target)
//{
//	int first = 0; // 탐색 대상의 시작 인덱스 값
//	int last = len - 1; // 탐색 대상의 마지막 인덱스 값
//	int mid;
//
//	while (first <= last)
//	{
//		mid = (first <= last) / 2;
//
//		if (target == ar[mid])
//		{
//			return mid;
//
//		}
//		else // 타겟이 아니라면
//			if (target < ar[mid])
//				last = mid - 1; // 뒷부분을 탐색 대상에서 제외
//			else
//				first = mid + 1; // 앞부분을 탐색 대상에서 제외
//
//	}
//
//	return -1; // 찾지 못했을때 반환되는 값 -1
//}
//
//
//
//int main()
//{                     //이진탐색 알고리즘을 하기 위해선  정렬이 되어 있어야 한다.
//	                  // 버블 정렬 후 이진 탐색 알고리즘을 진행 해야 한다.
//	int arr[] = {1,3,5,7,9};
//	int idx;
//
//	idx = Bsearch(arr, sizeof(arr)/sizeof(int), 7);
//	if (idx == -1)
//		printf("탐색실패!!!\n");
//	else
//		printf("타겟 저장 인덱스 : %d \n", idx);
//
//	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("탐색 실패!!!\n");
//	else
//		printf("타겟 저장 인덱스 : %d \n", idx);
//
//	return 0;
//}