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
	int first = 0; // Ž�� ����� ���� �ε��� ��
	int last = len - 1; // Ž�� ����� ������ �ε��� ��
	int mid;

	while (first <= last)
	{
		mid = (first <= last) / 2;

		if (target == ar[mid])
		{
			return mid;

		}
		else // Ÿ���� �ƴ϶��
			if (target < ar[mid])
				last = mid - 1; // �޺κ��� Ž�� ��󿡼� ����
			else
				first = mid + 1; // �պκ��� Ž�� ��󿡼� ����

	}

	return -1; // ã�� �������� ��ȯ�Ǵ� �� -1
}



int main()
{                     //����Ž�� �˰����� �ϱ� ���ؼ�  ������ �Ǿ� �־�� �Ѵ�.
					  // ���� ���� �� ���� Ž�� �˰����� ���� �ؾ� �Ѵ�.

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
		printf("Ž������!!!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d \n", idx);

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("Ž�� ����!!!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d \n", idx);

	return 0;
}