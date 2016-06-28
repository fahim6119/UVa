#include<stdio.h>
#include<stdlib.h>
void sieve();
void int_str(int a,char c[]);
int status[1000001]={0};
char s[1000];
int main()
{
    int n,p,e,x;
    sieve();
    while(scanf("%d",&n)==1)
    {
        p=0;e=0;
        if(status[n]==0)
            p=1;
        int_str(n,s);
        x=atoi(s);
        if(x==n)
            e=0;
        else if(status[x]==0)
            e=1;
        if((p==0 && e==0)|| (p==0))
            printf("%d is not prime.\n",n);
        else if(p==1 && e==0)
            printf("%d is prime.\n",n);
        else if(p==1 && e==1)
            printf("%d is emirp.\n",n);
    }
    return 0;
}

void sieve()
{
    int i,j;
    status[0]=status[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=1000000;j=j+i)
                status[j]=1;
    }
}

void int_str(int a,char c[])
{
    int m,r,j=0;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c[j++]=r+'0';
    }
    c[j]=0;
}
