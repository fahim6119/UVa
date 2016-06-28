#include<stdio.h>
int main()
{
    long long b[5],g[5],c[5],a[6],min;
    int i,x;
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])==9)
    {
        a[0]=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
        a[1]=b[1]+b[2]+c[0]+c[1]+g[0]+g[2];
        a[2]=b[0]+b[2]+c[1]+c[2]+g[0]+g[1];
        a[3]=b[0]+b[1]+c[1]+c[2]+g[0]+g[2];
        a[4]=b[0]+b[2]+c[0]+c[1]+g[2]+g[1];
        a[5]=b[0]+b[1]+c[0]+c[2]+g[2]+g[1];
        min=a[0];
        for(i=0;i<6;i++)
        {
            if(a[i]<min)
                min=a[i];
        }
        for(i=0;i<6;i++)
        {
            if(a[i]==min)
            {
                x=i;
                break;
            }
        }
        if(x==0) printf("BCG");
        else if(x==1) printf("BGC");
        else if(x==2) printf("CBG");
        else if(x==3) printf("CGB");
        else if(x==4) printf("GBC");
        else if(x==5) printf("GCB");
        printf(" %lld\n",min);
    }
    return 0;
}
