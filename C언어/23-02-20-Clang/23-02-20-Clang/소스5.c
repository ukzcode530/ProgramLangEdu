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
//	int first = 0; // Ž�� ����� ���� �ε��� ��
//	int last = len - 1; // Ž�� ����� ������ �ε��� ��
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
//		else // Ÿ���� �ƴ϶��
//			if (target < ar[mid])
//				last = mid - 1; // �޺κ��� Ž�� ��󿡼� ����
//			else
//				first = mid + 1; // �պκ��� Ž�� ��󿡼� ����
//
//	}
//
//	return -1; // ã�� �������� ��ȯ�Ǵ� �� -1
//}
//
//
//
//int main()
//{                     //����Ž�� �˰����� �ϱ� ���ؼ�  ������ �Ǿ� �־�� �Ѵ�.
//	                  // ���� ���� �� ���� Ž�� �˰����� ���� �ؾ� �Ѵ�.
//	int arr[] = {1,3,5,7,9};
//	int idx;
//
//	idx = Bsearch(arr, sizeof(arr)/sizeof(int), 7);
//	if (idx == -1)
//		printf("Ž������!!!\n");
//	else
//		printf("Ÿ�� ���� �ε��� : %d \n", idx);
//
//	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("Ž�� ����!!!\n");
//	else
//		printf("Ÿ�� ���� �ε��� : %d \n", idx);
//
//	return 0;
//}