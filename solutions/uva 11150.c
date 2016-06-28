#include<stdio.h>
int main()
{
    int n,r,sum,e;
    while(scanf("%d",&n)==1)
    {
        sum=n,r=0;
        while(n>0)
        {
            e=n+r;
            n=e/3;
            sum+=n;
            r=e%3;
            if(e==2)
                sum=sum+1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
