#include<stdio.h>
int main()
{
    long long int t,a,l,n,count;
    for(t=1;;t++)
    {
        scanf("%lld %lld",&a,&l);
        if(a<0 && l<0)
            break;
        count=1;
        n=a;
        while(n<=l)
        {
			if( n==1)
                break;
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            if( n>l)
                break;
            count++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,a,l,count);
    }
    return 0;
}
