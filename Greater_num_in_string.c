#include<stdio.h>
int stringgreat(char *,char *);
void main()
{
    char str1[20],str2[20];
    int k;
    printf("Enter the 2 strings\n");
    scanf("%s%s",str1,str2);
    k=stringgreat(str1,str2);
    if(k==-1)
        printf("both strings are equal\n");
    else if(k==0)
        printf("%s is greater\n",str1);
    else
        printf("%s is greater\n",str2);
}
int stringgreat(char str1[20],char str2[20])
{
    int l1=0,l2=0,temp=0,i,j;
    if((str1[l1]=='-')&&(str2[l2]!='-'))
        return 1;
    else if((str1[l1]!='-')&&(str2[l2]=='-'))
        return 0;
    else
    {
        if((str1[l1]=='-')&&(str2[l2]=='-'))
        {
           l1++;
           l2++;
           temp=1;
        }
        while(str1[l1]!='0')
            l1++;
        while(str2[l2]!='0')
            l2++;
        for(i=l1;str1[i];i++);
        for(j=l2;str2[j];j++);
        if((i>j)&&(temp==0))
            return 0;
        else if((i>j)&&(temp==1))
            return 1;
        else if((i<j)&&(temp==0))
            return 1;
        else if((i<j)&&(temp==1))
            return 0;
        else if(i==j)
        {
            while(1)
            {
                if((str1[l1]>str2[l1])&&(temp==0))
                    return 0;
                else if((str1[l1]>str2[l1])&&(temp==1))
                    return 1;
                else if((str1[l1]<str2[l1])&&(temp==0))
                    return 1;
                else if((str1[l1]<str2[l1])&&(temp==1))
                    return 0;
                else if((str1[l1]==str2[l1])&&(str1[l1]!='\0'))
                    l1++;
                else if((str1[l1]==str2[l1])&&(str1[l1]=='\0'))
                    return -1;
            }
        }
    }
}
