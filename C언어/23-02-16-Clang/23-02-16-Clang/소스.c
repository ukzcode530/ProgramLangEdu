#include <stdio.h>
#include<string.h>


void Remove(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';

}



//int ConversionCase(int ch)
//{
//
//	int diff = 'a' - 'A';
//	if (ch >= 'A' && ch <= 'Z')
//		return ch + diff;
//	else if (ch >= 'a' && ch <= 'z')
//		return ch - diff;
//	else
//		return -1;
//
//}



int main()
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("���ڿ� 1 �Է� : ");
	fgets(str1, sizeof(str1), stdin);
	Remove(str1);

	printf("���ڿ� 2 �Է� : ");
	fgets(str2, sizeof(str2), stdin);
	Remove(str2);

	strcpy_s(str3, sizeof(str1), str1);
	strcat_s(str3, sizeof(str2), str2);

	printf("%s \n", str3);

	return 0;

	/*int ch;
	printf("���ڿ� �Է�: ");
	ch = getchar();
	ch = ConversionCase(ch);
	if (ch == -1)
	{

		puts("���� ��� �Է��Դϴ�.");
		return -1;
	}

	putchar(ch);*/


	

	/*char str[50];
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str,sizeof(str));

	printf("�Է� ���� ���� ��� : %s\n", str);*/

	/*int ch1, ch2;

	ch1 = getchar();
	ch2 = fgetc(stdin);
	
	putchar(ch1);
	fputc(ch2, stdout);*/

	/*int ch;
	while (1)
	{
		ch = getchar();

		if (ch == EOF)
			break;
		putchar(ch);

	}*/


	//char* str = "Simple String";

	//printf("1. Puts test ------ \n");
	//puts(str);
	//puts("So simple String");

	//printf("2. fputs test ----- \n");
	//fputs(str, stdout); printf("\n");
	//fputs("So Simple String", stdout); printf("\n");


	//printf("3. end of main ----\n");
  

	//char str[7];
	////gets(str); �迭�� ���˻縦 ���Ѵ�.
	//fgets(str, sizeof(str), stdin);
	//puts(str);
   

	//char str[7];
	//int i;

	//for (i = 0; i < 3; i++)
	//{

	//	fgets(str, sizeof(str), stdin);
	//	printf("Read %d : %s \n", i + 1, str);
	//}
  
	//char perID[7];
	//char name[10];
	//fputs("�ֹι�ȣ �� 6�ڸ� �Է� : \n", stdout);
	//fgets(perID, sizeof(perID), stdin);
	// while (getchar() != '\n');
	////rID[strlen(perID) - 1] = NULL;
	//   //���ڿ� ���̰� 
 //    
	//fputs("�̸� �Է�: ", stdout);
	//fgets(name, sizeof(name), stdin);

	//printf("�ֹι�ȣ : %s\n", perID);
	//printf("�̸� : %s\n", name);

	//char str[100];
	//printf("���ڿ� �Է�: ");
	//fgets(str, sizeof(str), stdin);
	//printf("���� : %d, ���� : %s \n", strlen(str), str);

	//RemoveBSN(str);
	//printf("���� : %d, ���� : %s \n", strlen(str), str);
  

	//char str1[20] = "1234567890";
	//char str2[20] = "�����ٶ�";
	//char str3[20];
	//
	///******* case 1 ******/
	////strcpy_s(str2, sizeof(str2), str1);
	////puts(str2);

	////strcpy_s(str3, sizeof(str3), str2);
	////puts(str3);

	//strcpy_s(str3, sizeof(str3), str1);
	//puts(str3);
	//strcpy_s(str3, sizeof(str3), str2);
	//puts(str3);

	//strncpy_s(str3, sizeof(str3), str2, 4);
	//puts(str3);

	//strncpy_s(str2, sizeof(str2), str1, 4);
	//puts(str2);
	

	
	/*
	puts(str3);*/

//char str1[20] = "First";
// char str2[20] = "Second";
// char str3[20] = "Simple num : ";
// char str4[20] = "1234567890";
// char str5[100] = "";
//
//
// strcat_s(str5, sizeof(str5), str1);
// strcat_s(str5, sizeof(str5), str2);
// strncat_s(str5, sizeof(str5), str3, 6);
// strncat_s(str5, sizeof(str5), str4, 5);
// puts(str5);

	/******* case 2 ******/

//char str1[20];
//char str2[20];
//printf("���ڿ� �Է� 1: ");
//scanf_s("%s", str1,sizeof(str1));
//printf("���ڿ� �Է�:2  ");
//scanf_s("%s", str2, sizeof(str2));
//
//if (!strcmp(str1, str2))
//{
//	puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
//}
//
//else
//
//{
//	puts("�� ���ڿ��� �������� �ʽ��ϴ�.");
//
//		if(!strncmp(str1, str2, 3))
//			puts("�׷��� �� �����ڴ� �����մϴ�.");
//}


}




