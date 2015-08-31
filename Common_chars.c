#include<stdio.h>
void common_char(char[], char[]);
void main()
{
	char str1[20], str2[20];
	printf("Enter 2 strings\n");
	scanf("%s%s", str1, str2);
	common_char(str1, str2);
}
void common_char(char str1[], char str2[])
{
	int a[255] = { 0 }, i, temp;
	for (i = 0; str2[i]; i++)
	{
		temp = str2[i];
		a[temp] = 1;
	}
	for (i = 0; str1[i]; i++)
	{
		temp = str1[i];
		if (a[temp] == 1)
		{
			printf("%c\t", str1[i]);
			a[temp] = 0;
		}
	}
}