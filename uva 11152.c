#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double r,s,ir,rose,sun,vio,A;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4*A);
        ir=A/s;
        rose=4*atan(1)*ir*ir;
        sun=(4*atan(1)*r*r)-A;
        vio=A-rose;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,rose);
    }
    return 0;
}
