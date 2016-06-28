#include<stdio.h>
int main()
{
    long long int n,l;
    while(scanf("%lld",&n)==1 && n>=0)
    {
        l=(n*(n+1)/2)+1;
        printf("%lld\n",l);
    }
    return 0;
}
