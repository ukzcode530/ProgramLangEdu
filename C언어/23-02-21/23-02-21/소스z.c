#include<stdio.h>
#include<string.h>

int main()
{
	FILE* src;
	fopen_s(&src, "C:\\atentsTest\\atens.txt.txt", "rt");
	char str[70];

	while (fgets(str, sizeof(str),src)!= NULL)
		printf(str);
	fclose(src);
	return 0;

}