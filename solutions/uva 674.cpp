#include<stdio.h>
#include<string.h>
int coin[]={1,5,10,25,50};
int dp[7500];

int coiner(int n, int m)
{
    int i,j;
    for(i=0;i<5;i++)
        for(j=coin[i];j<=n;j++)
        {
            dp[j]+=dp[j-coin[i]];
        }
    return 0;
}

int main()
{
    int a;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    coiner(7489,5);
    while(scanf("%d",&a)==1)
    {
        printf("%d\n",dp[a]);
    }
    return 0;
}

