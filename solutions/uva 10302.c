#include<stdio.h>
int main()
{
    long long int a,n,x;
    while(scanf("%lld",&n)==1)
    {
        a=(n*(n+1))/2;
        x=a*a;
        printf("%lld\n",x);
    }
    return 0;
}
