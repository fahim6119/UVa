#include<stdio.h>
#include<math.h>
int main()
{
    int T,t;
    double t1,t2,u,v,w,d,ans;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v==0 || u==0 || v>=u)
            printf("Case %d: can't determine\n",t);
        else
        {
            w=sqrt(u*u-v*v)*1.0;
            t1=(1.0*d)/(1.0*w);
            t2=(1.0*d)/(1.0*u);
            ans=fabs(t1-t2);
            printf("Case %d: %.3lf\n",t,ans);
        }
    }
    return 0;
}
