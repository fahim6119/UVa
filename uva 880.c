#include<stdio.h>
#include<math.h>
int main()
{
    long long int up,down,n,d,ax,a,b;
    double x,m;
    while(scanf("%lld",&n)==1)
    {
        x=(sqrt(8*n+1)-1)/2;
        d=ceil(x);
        ax=(d*(d-1)/2)+1;
        up=ax-1+d;
        down=ax;
        b=n-down+1;
        a=up-n+1;
        printf("%lld/%lld\n",a,b);
    }
    return 0;
}
