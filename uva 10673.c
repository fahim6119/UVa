#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,k,p,q,a,b;
    int i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&k);
        a=floor((double)x/k);
        b=ceil((double)x/k);
        for(i=0;i*a<=x;i++)
        {
            p=i;
            if((x-(i*a))%b ==0)
                q=(x-(i*a))/b;
            if(p*a + q*b==x)
            {
                printf("%lld %lld\n",p,q);
                break;
            }
        }
    }
    return 0;
}
