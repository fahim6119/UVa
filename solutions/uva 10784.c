#include<stdio.h>
#include<math.h>
int main()
{
    long long int t=0,i,d,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        i=ceil((3+sqrt(9+8*n))/2);
        t++;
        printf("Case %lld: %lld\n",t,i);
    }
    return 0;
}
