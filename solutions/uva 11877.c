#include<stdio.h>

int main()
{
    int n,a,r,d;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        d=0;
        while(n>2)
        {
            a=(int)n/3;
            r=n%3;
            n=a+r;
            d=d+a;
        }
        if(n==2)
            d++;
        printf("%d\n",d);
    }
    return 0;
}
