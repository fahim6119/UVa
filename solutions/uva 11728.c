#include<stdio.h>
int factor[1001]={0};
void sum_factor();
int main()
{
    sum_factor();
    int i,j,n,t=0,l;
    while(scanf("%d",&n)==1 && n!=0)
    {
        t++;
        l=-1;
        for(i=n;i>=1;i--)
        {
            if(factor[i]==n)
            {
                l=i;
                break;
            }
        }
        printf("Case %d: %d\n",t,l);
    }
    return 0;
}

void sum_factor()
{
    int i,j;
    for(i=1;i<=1000;i++)
    {
        for(j=i;j<=1000;j+=i)
        {
            factor[j]+=i;
        }
    }
}
