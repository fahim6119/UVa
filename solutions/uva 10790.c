#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,t=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        t++;
        c=(a*(a-1)/2);
        d=(b*(b-1)/2);
        e=c*d;
        printf("Case %lld: %lld\n",t,e);
    }
    return 0;
}
