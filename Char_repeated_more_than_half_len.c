#include<stdio.h>
char string_half(char[]);
void main()
{
	char str[20], ch;
	printf("Enter a string\n");
	scanf("%s", str);
	ch=string_half(str);
	if (ch == '-')
		printf("There are no characters in the string which are more than half\n");
	else
		printf("%c", ch);
}
char string_half(char a[])
{
	int l, i, count = 0, j;
	char ch;
	for (l = 0; a[l]; l++);
	for (i = 0;i<=l/2; i++)
	{
		ch = a[i];
		count = 0;
		for (j = 0; a[j]; j++)
		{
			if (ch == a[j])
				count++;
		}
		if (count>=l/ 2)
			return ch;
	}
	return '-';
}