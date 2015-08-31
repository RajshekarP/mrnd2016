#include <stdio.h>
int stringlength(char []);
void main()
{
    char str[20];
    int k;
    printf("Enter a string\n");
    gets(str);
    if(str==NULL)
        printf("Length of given string=0");
    else
    {
        k=stringlength(str);
        printf("Length of given string is %d",k);
    }
}
int stringlength(char str[20])
{
    int l;
    for(l=0;str[l];l++);
    return l;
}
