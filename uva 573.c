#include<stdio.h>
int main()
{
    double ih,u,c,s,f,H,U,D,F;
    int i;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)==4)
    {
        if(H==0)
            break;
        s=0;
        for(i=0;1;i++)
        {
            ih=s;
            f=U*F/100;
            u=U-i*f;
            if(u<0)
                u=0;
            c=ih+u;
            if(c>H)
            {
                printf("success on day %d\n",i+1);
                break;
            }
            s=c-(double)D;
            if(s<0)
            {
                printf("failure on day %d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
