#include<stdio.h>
void interchange(int [],int);
void main()
{
    int a[20],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d sorted elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    interchange(a,n);
    printf("The array after interchanging the misplaced values are\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void interchange(int a[],int n)
{
    int i,j,temp=0,temp1;
    for(i=0;i<n-1;i++)
        if(a[i]>a[i+1])
            break;
    for(j=i+1;j<=n-2;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=1;
            break;
        }
    }
    if(temp==0)
        j=i;
    temp1=a[i];
    a[i]=a[j+1];
    a[j+1]=temp1;
}
