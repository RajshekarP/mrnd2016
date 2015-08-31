#include <stdio.h>
char lastn(char [],int);
void main()
{
    char str[20],ch;
    int n;
    printf("Enter the string\n");
    scanf("%s",str);
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n<0)
        printf("invalid input\n");
    else
    {
        ch=lastn(str,n);
        printf("The last %d character in %s is %c",n,str,ch);
    }
}
char lastn(char str[],int n)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i+n]=='\0')
            return str[i];
    return '0';
}
