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

	printf("문자열 1 입력 : ");
	fgets(str1, sizeof(str1), stdin);
	Remove(str1);

	printf("문자열 2 입력 : ");
	fgets(str2, sizeof(str2), stdin);
	Remove(str2);

	strcpy_s(str3, sizeof(str1), str1);
	strcat_s(str3, sizeof(str2), str2);

	printf("%s \n", str3);

	return 0;

	/*int ch;
	printf("문자열 입력: ");
	ch = getchar();
	ch = ConversionCase(ch);
	if (ch == -1)
	{

		puts("범위 벗어난 입력입니다.");
		return -1;
	}

	putchar(ch);*/


	

	/*char str[50];
	printf("문자열 입력 : ");
	scanf_s("%s", str,sizeof(str));

	printf("입력 받은 문자 출력 : %s\n", str);*/

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
	////gets(str); 배열의 경계검사를 안한다.
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
	//fputs("주민번호 앞 6자리 입력 : \n", stdout);
	//fgets(perID, sizeof(perID), stdin);
	// while (getchar() != '\n');
	////rID[strlen(perID) - 1] = NULL;
	//   //문자열 길이값 
 //    
	//fputs("이름 입력: ", stdout);
	//fgets(name, sizeof(name), stdin);

	//printf("주민번호 : %s\n", perID);
	//printf("이름 : %s\n", name);

	//char str[100];
	//printf("문자열 입력: ");
	//fgets(str, sizeof(str), stdin);
	//printf("길이 : %d, 내용 : %s \n", strlen(str), str);

	//RemoveBSN(str);
	//printf("길이 : %d, 내용 : %s \n", strlen(str), str);
  

	//char str1[20] = "1234567890";
	//char str2[20] = "가나다라마";
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
//printf("문자열 입력 1: ");
//scanf_s("%s", str1,sizeof(str1));
//printf("문자열 입력:2  ");
//scanf_s("%s", str2, sizeof(str2));
//
//if (!strcmp(str1, str2))
//{
//	puts("두 문자열은 완벽히 동일합니다.");
//}
//
//else
//
//{
//	puts("두 문자열은 동일하지 않습니다.");
//
//		if(!strncmp(str1, str2, 3))
//			puts("그러나 앞 세글자는 동일합니다.");
//}


}




