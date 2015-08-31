#include<stdio.h>
int string_permut(char[], char[]);
void main()
{
	char str1[20], str2[20];
	int k;
	printf("Enter 2 strings\n");
	scanf("%s%s", str1, str2);
	k = string_permut(str1, str2);
	if (k == 0)
		printf("the given 2 strings are permutative\n");
	else
		printf("The given 2 strings are not permutative\n");
}
int string_permut(char str1[], char str2[])
{
	int a[255] = { 0 }, i;
	for (i = 0; str1[i]; i++)
		a[str1[i]]++;
	for (i = 0; str2[i]; i++)
		a[str2[i]]--;
	for (i = 0; i < 255; i++)
	{
		if (a[i]!=0)
			return 1;
	}
	return 0;
}