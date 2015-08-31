#include<stdio.h>
void insert(int [],int,int);
void main()
{
    int a[20],i,n,k;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d sorted elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be inserted\n");
    scanf("%d",&k);
    insert(a,n,k);
    printf("The sorted array after inserting %d is\n",k);
    for(i=0;i<n+1;i++)
        printf("%d\t",a[i]);
}
void insert(int a[],int n,int k)
{
    int i,j;
    if(k>a[n-1])
        a[n]=k;
    else
    {
        for(i=0;i<n;i++)
        {
            if(k<a[i])
            {
                for(j=n;j>=i;j--)
                    a[j]=a[j-1];
                a[i]=k;
                break;
            }
        }
    }
}
