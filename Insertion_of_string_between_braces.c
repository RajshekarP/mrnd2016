#include<stdio.h>
#include<stdlib.h>
void stringbtwbraces(char[], char[]);
void main()
{
	char str1[20], str2[10];
	printf("Enter 2 strings\n");
	scanf("%s%s", str1, str2);
	stringbtwbraces(str1, str2);
}
void stringbtwbraces(char a[], char b[])
{
	char str[10];
	int l, i, count = 0;
	for (l = 0; a[l]; l++);
	if (l % 2 != 0)
		printf("Given string does not contain even characters\n");
	else
	{
		for (i = 0; i < l / 2; i++)
		{
			switch (a[i])
			{
			case '{':str[count] = '}';
				count++;
				break;
			case '(':str[count] = ')';
				count++;
				break;
			case '[':str[count] = ']';
				count++;
				break;
			case '<':str[count] = '>';
				count++;
				break;
			default:printf("Invalid string\n");
				exit(0);
			}
		}
		for (i = l / 2; i < l; i++)
		{
			switch (a[i])
			{
			case '}':str[count] = '{';
				count++;
				break;
			case ')':str[count] = '(';
				count++;
				break;
			case ']':str[count] = '[';
				count++;
				break;
			case '>':str[count] = '<';
				count++;
				break;
			default:printf("Invalid string\n");
				exit(0);
			}
		}
		str[count] = '\0';
		count--;
		for (i = 0, count; count; i++, count--)
		{
			if (a[i] != str[count])
			{
				printf("Invalid string\n");
				exit(0);
			}
		}
		for (i = 0; i < l / 2; i++)
			printf("%c", a[i]);
		printf("%s", b);
		for (i = l / 2; i < l; i++)
			printf("%c", a[i]);
	}
}