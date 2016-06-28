#include<stdio.h>
#include<math.h>
int main()
{
    double ans,a,n,x,i,q,l;
    l=1.0/3.0;
    while(scanf("%lf",&n)==1)
    {
        if(n==0)
            break;
        i=pow(n,l)+1e-10;
        a=(int)i;
        x=a*a*a;
        q=(double)(n-x)/(3*a*a);
        ans=a+q;
        printf("%.4lf\n",ans);
    }
    return 0;
}
