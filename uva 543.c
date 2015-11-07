#include<stdio.h>
int prime[1000000],status[1000000]={0};
void sieve();
void prime_list();
int main()
{
    int i,j,k,n,b,c;
    prime_list();
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0;i<n;i++)
        {
            b=prime[i];
            c=n-b;
            if(status[c]==0)
            {
                printf("%d = %d + %d\n",n,b,c);
                break;
            }
        }
        if(i==n)
            printf("Goldbach's conjecture is wrong.\n");
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

void prime_list()
{
    sieve();
    int i,j=0,prime_end;
    for(i=2;i<=1000000;i++)
        if(status[i]==0)
            prime[j++]=i;
    prime_end =j;
}
