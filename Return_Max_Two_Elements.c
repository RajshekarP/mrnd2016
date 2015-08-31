#include<stdio.h>
void max2ele(int[], int, int[]);
void main()
{
	int a[10], n, i, b[2] = { 0,0 };
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max2ele(a, n, b);
	printf("the 2 maximum elements are %d,%d\n", b[0], b[1]);
}
void max2ele(int a[], int n, int b[])
{
	int i;
	b[0] = b[1] = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > b[0])
		{
			b[1] = b[0];
			b[0] = a[i];
		}
		else if (a[i] > b[1])
		{
			if (a[i] == b[0])
				continue;
			else
				b[1] = a[i];
		}
	}
}