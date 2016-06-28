#include<stdio.h>
#include<math.h>
#define EPS 1e-6
int main()
{
    double a,n,x1,l,w,x2,max,min;
    while(scanf("%lf %lf",&l,&w)==2)
    {
        if(w>l)
        {
            a=w;
            w=l;
            l=a;
        }
        n=sqrt(w*w+l*l-w*l);
        x1=(l+w-n)/6.0;
        max=x1 + EPS;;
        printf("%.3lf 0.000 ",max);
        if(l>0 && w>0)
        {
            min=w/2.0+EPS;
            printf("%.3lf",min);
        }
        printf("\n");
    }
    return 0;
}
