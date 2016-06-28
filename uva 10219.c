#include<stdio.h>
#include<math.h>
int main()
{
    long double l,x;
    long long int n,k,i,c,d;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        l=0;
        if(k>n-k)
            k =n - k;
        for(i=1;i<=k;i++)
        {
            x=log10(n+1-i)-log10(i);
            l+=x;
        }
        d=floor(l)+1;
        printf("%lld\n",d);
    }
    return 0;
}
