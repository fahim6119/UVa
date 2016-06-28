#include<stdio.h>
int prime[100000]={0},status[1000000]={0};
void sieve();
int prime_list();
int main()
{
    sieve();
    int last=prime_list();
    int a,x,n,j,i;
    while(scanf("%d",&n)==1)
    {
        int count[100000]={0},m=n;
        if(n==0)
            break;
        a=0;
        for(i=0;n>1;i++)
        {
            while(n%prime[i]==0)
            {
                count[i]=1;
                n=n/prime[i];
            }
        }

        for(j=0;j<=i;j++)
            if(count[j]==1)
                a++;
        printf("%d : %d\n",m,a);
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

int prime_list()
{
    int i,j=0,prime_end;
    for(i=2;i<=1000000;i++)
        if(status[i]==0)
            prime[j++]=i;
    prime_end =j;
    return prime_end;
}
