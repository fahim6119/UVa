#include<stdio.h>
int status[1000000]={0},prime[1000001]={0},count1[1000000]={0};
void sieve();
void sum_digit();
void counter();
int main()
{
    int t,n1,i,n2,count;
    sieve();
    sum_digit();
    counter();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n1,&n2);
        printf("%d\n",count1[n2]-count1[n1-1]);
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

void sum_digit()
{
    int i,j,d,sum;
    for(i=1;i<=1000000;i++)
    {
        sum=0;
        j=i;
        while(j>0)
        {
            d=j%10;
            sum+=d;
            j=j/10;
        }
        if(status[sum]==0)
            prime[i]=1;
    }
}

void counter()
{
        int count=0,i;
        count1[0]=0;
        for(i=1;i<=1000000;i++)
        {
            if(prime[i]==1 && status[i]==0)
            {
                count++;
            }
            count1[i]=count;
        }
}
