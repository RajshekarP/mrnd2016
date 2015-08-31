#include<stdio.h>
int div_11(int);
void main()
{
	int n, k;
	printf("Enter a number\n");
	scanf("%d", &n);
	k = div_11(n);
	if (k == 0)
		printf("Given number is divisible by 11");
	else
		printf("Given number is not divisible by 11");
}
int div_11(int n)
{
	int sum1 = 0, sum2 = 0, i = 0;
	while (n)
	{
		if (i % 2 == 0)
			sum1 += (n % 10);
		else
			sum2 += (n % 10);
		i++;
		n = n / 10;
	}
	if (sum1 == sum2) 
		return 0;
	else if(((sum1-sum2)>10)||((sum2-sum1)>10))
		return div_11(sum1 - sum2);
	else
		return -1;
} 