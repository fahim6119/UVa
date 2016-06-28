#include<stdio.h>
#include<string.h>
#define MAX 10000
long long coin[25];
long long dp[MAX+10];
int coiner()
{
    int i,j,k;
    for(i=1;i<=21;i++)
    {
        for(j=coin[i];j<=MAX;j++)
            dp[j]+=dp[j-coin[i]];
    }
    return 0;
}

int main()
{
    int i,j,k,n,t;
    for(i=0;i<22;i++)
        coin[i]=i*i*i;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    coiner();
    while(scanf("%d",&n)==1)
        printf("%lld\n",dp[n]);
    return 0;
}
