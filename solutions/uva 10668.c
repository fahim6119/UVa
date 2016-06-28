#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define eps 1e-7

double r_cal(double h,double L)
{
    double r=((h/2.0)+(L*L)/(8.0*h));
    return r;
}

int main()
{
    int test,cas=0;
    double L,n,C,h,min,max,r,a,Lp,high,low,mid;
    while(~scanf("%lf %lf %lf",&L,&n,&C))
    {
        if(L<0)
            break;
        Lp=L*(1+n*C);
        high=L/2;
        low=0;
        mid=(high-low)/2.0 + low;

        if(L==0 || n==0 ||C==0)
        {
            printf("0.000\n",++cas);
            continue;
        }
        while(1)
        {
            r=r_cal(mid,L);
            a=r*acos(1-((L*L)/(2*r*r)));
            if(a>Lp)
            {
                min=Lp;
                max=a;
            }
            if(max-min < eps)
            {
                break;
            }
            if(a>Lp)
            {
                high=mid;
            }
            else if(a<Lp)
            {
                low=mid;
            }
            mid=(high+low)/2.0;
        }
        printf("%.3lf\n",mid);

    }

    return 0;
}
