#include<stdio.h>
int str_palin(char []);
void main()
{
	char str[20];
	int k;
	printf("Enter a string\n");
	gets(str);
	k = str_palin(str);
	if (k == 0)
		printf("given string is palindrome\n");
	else
		printf("Given string is not palindrome\n");
}
int str_palin(char str[])
{
	int i, j, l;
	for (l = 0; str[l]; l++);
	for (i = 0, j = l - 1; i < j; i++, j--)
		if (str[i] != str[j])
			return 1;
	return 0;
}