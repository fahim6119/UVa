#include<stdio.h>
int prime[20000001],status[20000001]={0},pair[100100]={0};
void sieve();
int prime_list();
void prime_pair(int x);
int main()
{
    int n;
    sieve();
    int x=prime_list();
    prime_pair(x);
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",pair[n],pair[n]+2);
    }
    return 0;
}

void sieve()
{
    int i,j;
    status[0]=status[1]=1;
    for(i=2;i<=4475;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=20000000;j=j+i)
                status[j]=1;
    }
}

int prime_list()
{
    int i,j=0,prime_end;
    for(i=2;i<=20000000;i++)
        if(status[i]==0)
            prime[j++]=i;
    prime_end =j;
    return prime_end;
}

void prime_pair(int x)
{
    int i,j=1;
    for(i=0;i<x-1;i++)
    {
        if(prime[i+1]-prime[i]==2)
        {
            pair[j++]=prime[i];
        }
    }
}
