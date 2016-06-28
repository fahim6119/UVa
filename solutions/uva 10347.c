#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,d,area;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        area=(4*d)/3;
        if(area>0.0)
            printf("%.3lf\n",area);
        else
            printf("-1.000\n");
    }
    return 0;
}
