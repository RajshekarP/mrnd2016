#include<stdio.h>
#include<stdlib.h>
void date(int);
void month(int);
void year(int);
void main()
{
	int d, m, y;
	printf("Enter the date,month and year\n");
	scanf("%d%d%d", &d, &m, &y);
	if ((d <= 1) && (d >= 31))
	{
		printf("Invalid date\n");
		exit(0);
	}
	if ((m < 1) && (m>12))
	{
		printf("Invalid month\n");
		exit(0);
	}
	if (m == 2)
	{
		if ((y % 4 == 0) && (d > 29))
		{
			printf("Invalid date\n");
			exit(0);
		}
		else if((y%4!=0)&&(d > 28))
		{
			printf("Invalid date\n");
			exit(0);
		}
	}
	if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
	{
		if (d > 30)
		{
			printf("Invalid date\n");
			exit(0);
		}
		if (y > 9999)
		{
			printf("Year too large\n");
			exit(0);
		}
	}
	date(d);
	month(m);
	year(y);

}
void date(int d)
{
	char a[11][11] = { " ","first","second","third","fourth","fifth","sixth","seventh","eigth","nineth" };
	char b[11][11] = { " ","eleventh","twelfth","thirteenth","fourteenth","fifteenth","sixteenth","seventeenth","eighteenth","nineteenth" };
	char c[4][10] = { " ","tenth","twenty","thirty" };
	if (d <= 9)
		printf("%s ", a[d]);
	else if ((d > 10) && (d < 20))
		printf("%s ", b[d % 10]);
	else if (d % 10 == 0)
		printf("%s ", c[d / 10]);
	else
	{
		printf("%s ", c[d / 10]);
		printf("%s ", a[d % 10]);
	}

}
void month(int m)
{
	char mon[12][12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("%s ", mon[m - 1]);
}
void year(int y)
{
	char a[10][10] = { " ","one","two","three","four","five","six","seven","eight","nine" };
	char b[10][10] = { " ","eleven","twelve","thiteen","fourteen","fifteen","sixteeen","seventeen","eighteen","nineteen" };
	char c[10][10] = { " ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
	if ((y >= 1000) && (y <= 9999))
	{
		printf("%s Thousand ", a[y / 1000]);
		y = y % 1000;
	}
	if ((y >= 100) && (y <= 999))
	{
		printf("%s Hundred ", a[y / 100]);
		y = y % 100;
	}
	if ((y >= 11) && (y <= 19))
		printf("%s ", b[y % 10]);
	if ((y > 20) && (y < 100))
	{
		printf("%s ", c[y / 10]);
		printf("%s ", a[y % 10]);
	}
}
