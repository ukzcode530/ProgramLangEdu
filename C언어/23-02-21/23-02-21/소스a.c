//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//
//
//int main()
//{
//
//	/*FILE* src;
//	fopen_s(&src,"src.text", "rt");
//	FILE* des;
//	fopen_s(&des,"des.txt", "wt");
//		fopen_s(&des, "des.txt", "wt");
//		int ch;
//
//		if (src == NULL || des = NULL)
//		{
//			puts("���� ���� ����!");
//				return -1;
//
//		}
//		while ((ch = fgetc(src)) != EOF)
//		fuptc(ch, des);
//
//		if (feof(src) != 0)
//			puts("���Ϻ��� �Ϸ�!");
//		else
//			puts("���Ϻ��� ����!");
//
//		fclose(src);
//		fclose(des);*/
//
//
//		/*char str[20];
//		int ch;
//
//		fopen_s(&fp, "src.txt", "wt");
//		if (fp == NULL)
//		{
//			puts("���� ���� ����");
//				return -1;
//
//
//		}
//		else
//		{
//			puts("���� ���� ����");
//
//
//		}
//
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//
//		fgets(str, sizeof(str), fp);
//		printf("%s", str);
//		fgets(str, sizeof(str), fp);
//		printf("%s", str);
//		fclose(fp);*/
//
//
//
//		/*FILE* fp;
//		fopen_s(&fp, "simple.txt", "wt");
//		if (fp == NULL) {
//			puts("���Ͽ��� ����!");
//			return -1;
//
//		}
//		else
//			puts("���Ͽ��� ����");
//
//
//		fputc('A', fp);
//		fputc('B', fp);
//		fputs("\n My name is Hong \n", fp);
//		fputs("Your name is Yoon \n", fp);
//		fclose(fp);*/
//
//
//
//		/*int ch, i;
//
//		FILE* fp;
//		fopen_s(&fp, "data.txt", "rt");
//		if (fp == NULL) {
//			puts("���Ͽ��� ����!");
//				return -1;
//		}
//		else
//		{
//			puts("���� ���� ����");
//		}
//
//		for (i = 0; i < 3; i++)
//		{
//			ch = fgetc(fp);
//			printf("%c \n", ch);
//
//
//		}
//		fclose(fp);*/
//
//		//FILE* fp;
//		//fopen_s(&fp, "data.txt", "wt");
//		//if (fp == NULL)
//		//{
//		//	puts("���Ͽ��� ����!");
//		//	return -1;
//
//		//}
//		//else
//		//{
//		//	puts("���Ͽ��� ����!");
//
//		//}
//		//fputc('A', fp);
//		//fputc('B', fp);
//		//fputc('C', fp);
//		//fclose(fp);
//
//	FILE* src;
//	fopen_s(&src, "src.txt", "rt");
//	FILE* des;
//	fopen_s(&des, "des.txt", "wt");
//
//	char str[20];
//
//	while (fgets(str, sizeof(str), src) != NULL)
//		fputs(str, des);
//
//	char str[20];
//
//	if (src == NULL || des == NULL)
//	{
//		puts("���� ���� ����!!");
//			return -1;
//
//
//	}
//
//
//
//}