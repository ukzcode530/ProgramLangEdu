//#include<stdio.h>
//#include<stdlib.h>;
//#include<time.h>;
//
//
//int main()
//{
	/*FILE* src;
	fopen_s(&src,"src100.bin", "rb");
	FILE* des;
	fopen_s(&des,"dst.bin", "wb");
	char buf[20];
	int readCnt;*/

	/*if (src == NULL || des = NULL) {
		puts("���� ���� ����!");
			return -1;

	}

	whie(1)
	{
		readCnt = fread((void*))buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ��� �Ϸ�");
				break;

			}
			else
				puts("���Ϻ��� ����");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des):

	}

	fclose(src);
	fclose(des);*/



	//char name[10];
	//char sex;
	//int age;

	//FILE* fp;
	//fopen_s(&fp, "friend.txt", "wt");
	//int i;


	//for (i = 0; i < 3; i++)
	//{

	//	printf("�̸� ���� ���� �� �Է�: ");
	//		scanf_s("%s %c %d", name, sizeof(name), &sex, sizeof(sex), &age);
	//		getchar();
	//		fprintf(fp, "%s %c %d", name, sex, age);
	//		// �ؽ�Ʈ �����Ϳ� ���̳ʸ� �����͸� ���� ��� �ҷ���
	//}                    
	//fclose(fp);

	//----------------------------���� -----------------------------

	/* char name[10];
	char sex;
	int age;

	FILE* fp;
	fopen_s(&fp,"friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf_s(fp, "%s, %c %d", name,sizeof(name), &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d", name, sex, age);

	}
	fclose(fp);


	return 0;

	*/  //--------------------------------�б� -----------------------

	/* ���ϻ��� */

	//FILE* fp;
	//fopen_s(&fp, "text.txt", "wt");
	//fputs("123456789", fp);
	//fclose(fp);

	///*���ϰ��� */

	//fopen_s(&fp,"text.txt", "rt");

	///* SEEK_END test*/
	//fseek(fp, -2, SEEK_END);
	//putchar(fgetc(fp));

	///* SEEK_SET test*/
	//fseek(fp, 2, SEEK_SET);
	//putchar(fgetc(fp));

	///* SEEK_CUR test*/
	//fseek(fp, 2, SEEK_CUR);
	//putchar(fgetc(fp));


	//fclose(fp);

	//long fpos;
	//int i;

	///* ���ϻ��� */

	//FILE* fp;
	//fopen_s(&fp, "text.txt", "wt");
	//fputs("1234-", fp);
	//fclose(fp);

	///* ���ϰ��� */

	//fopen_s(&fp, "text.txt", "rt");

	//for (i = 0; i < 4; i++)
	//{ 
	//	putchar(fgetc(fp));
	//fpos = ftell(fp);
	//fseek(fp, -1, SEEK_END);
	//fseek(fp, fpos, SEEK_SET);
	//}

	//fclose(fp);
//	return 0;
//
//}
 