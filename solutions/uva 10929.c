#include<stdio.h>
#include<string.h>
int main()
{
    int x,r,i,l;
    char y[2000];
    while(gets(y)!=0 && strcmp(y,"0")!=0)
    {
        l=strlen(y);
        r=0;
        for(i=0;i<l;i++)
        {
            x=(y[i]-48)+r*10;
            r=x%11;
        }
        if(r==0)
            printf("%s is a multiple of 11.\n",y);
        else
            printf("%s is not a multiple of 11.\n",y);
    }
    return 0;
}
