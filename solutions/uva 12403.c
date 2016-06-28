#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k,a=0,t,l,i,j;
    char b[10000],c[15];
    scanf("%d",&t);
    getchar();
    for(k=0;k<t;k++)
    {
        j=0;
        gets(b);
        if(b[0]=='r')
            printf("%d\n",a);
        else if(b[0]=='d')
        {
            for(i=7;b[i]!=0;i++)
                c[j++]=b[i];
            c[j]=0;
            l=atoi(c);
            a=a+l;
        }
    }
    return 0;
}
