#include<stdio.h>
void reverse_string(char[]);
void main()
{
	char str[30];
	printf("Enter a strings\n");
	scanf("%[^\n]s", str);
	reverse_string(str);
	printf("The reversed string is %s", str);
}
void reverse_string(char str[])
{
	char temp;
	int l, i, j, k;
	for (l = 0; str[l]; l++);
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	j = 0;
	for (i = 0; i < l+1; i++)
	{
		if ((str[i] == ' ')||(str[i]=='\0'))
		{
			k = i - 1;
			for (j, k; j < k; j++, k--)
			{
				temp = str[j];
				str[j] = str[k];
				str[k] = temp;
			}
			j = i + 1;
		}
	}
}