#include<stdio.h>
void tuple(int[], int, int);
void main()
{
	int a[10], n, ts, i;
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter the sum of the tuple\n");
	scanf("%d", &ts);
	tuple(a, n, ts);
}
void tuple(int a[], int n, int ts)
{
	int k, b[10] = { 0 }, i;
	for (i = 0; i < n; i++)
	{
		k = ts - a[i];
		b[a[i]]++;
		if ((b[a[i]] == 1) && (b[k] == 1))
			printf("%d\t%d\n", a[i], k);
	}
}