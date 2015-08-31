#include<stdio.h>
int sum(int);
void main()
{
    int n,k;
    printf("Enter a number\n");
    scanf("%d",&n);
    k=sum(n);
    printf("Sum of digits=%d\n",k);
}
int sum(int x)
{
    int a,s=0;
    while(x)
    {
        a=x%10;
        s=s+a;
        x=x/10;
    }
    return s;
}
