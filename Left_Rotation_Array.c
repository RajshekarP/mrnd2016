#include<stdio.h>
void leftrotate(int [],int,int);
void main()
{
    int a[10],n,x,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number of left-rotations\n");
    scanf("%d",&x);
    leftrotate(a,n,x);
    printf("The same array after left-rotation %d times\n",x);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void leftrotate(int a[],int n,int x)
{
    int i,j,temp;
    for(i=0;i<x;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
            a[j]=a[j-1];
        a[0]=temp;
    }
}

