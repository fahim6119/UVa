#include<stdio.h>
#include<math.h>
int main()
{
    long long int test,i,a,k,tax;
    double t,in;
    scanf("%lld",&test);
    for(k=1;k<=test;k++)
    {
        scanf("%lld",&a);
        in=(double)a;
        t=0;
        if(a<=180000)
        {
            tax=0;
            printf("Case %lld: %lld\n",k,tax);
            continue;
        }
        in=in-180000;
        if(in>0 && in<=300000)
            t=in*0.1;
        else if(in>300000 && in<=700000)
        {
            in=in-300000;
            t=(in*0.15)+ 30000.0;
        }
        else if(in>700000 && in<=1000000)
        {
            in=in-700000;
            t=(in*0.2)+ 90000.0;
        }
        else if(in>1000000)
        {
            in=in-1000000;
            t=in*0.25+ 150000;
        }
        tax=(long long) ceil(t);
        if(tax<2000)
            tax=2000;
        printf("Case %lld: %lld\n",k,tax);
    }
    return 0;
}
