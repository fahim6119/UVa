#include<stdio.h>
#include<string.h>
void reverse(char a[]);
int main()
{
    char a[10000];
    long int i,j,k,b,r,x,sum;
    while(gets(a))
    {
        if(strcmp(a,"0")==0)
            break;
        reverse(a);
        sum=0;
        for(i=0;a[i]!=0;i++)
        {
            j=i+1;
            r=1;
            for(k=0;k<j;k++)
                r=r*2;
            x=r-1;
            sum+=x*(a[i]-'0');
        }
        printf("%lld\n",sum);
    }
    return 0;
}

void reverse(char r[])
{
    int i,j,l;
    char temp[10001];
    l=strlen(r);
    for(i=l-1,j=0;i+1!=0;i--,j++)
    {
        temp[j]=r[i];
    }
    temp[j]='\0';
    strcpy(r,temp);
}

