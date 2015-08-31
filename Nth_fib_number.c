#include <stdio.h>
int nth_fibo(int );
void main()
{
    int n,k;
    printf("Enter the number\n");
    scanf("%d",&n);
    k=nth_fibo(n);
    printf("The fibonocci number at %d position is %d",n,k);
}
int nth_fibo(int n)
{
   int i=2,c,a=0,b=1;
   if(n==1)
        return a;
   else if(n==2)
        return b;
   else
   {
       while(1)
       {
           c=a+b;
           i++;
           if(i==n)
            return c;
           a=b;
           b=c;
        }
   }
}
