#include<stdio.h>
int main()
{
    int k,j;
    long long int x,y,a[1000],b[1000],i;
    double c,d;
    while(scanf("%d",&k)==1)
    {
        x=10002;
        i=0;
        for(y=k+1;y<=2*k;y++)
        {
            if((k*y)%(y-k)==0)
            {
                x=(k*y)/(y-k);
                d=(1.0/x)+(1.0/y);
                c=1.0/k;
                a[i]=x;
                b[i]=y;
                i++;
            }
        }
        printf("%lld\n",i);
        for(j=0;j<i;j++)
            printf("1/%d = 1/%lld + 1/%lld\n",k,a[j],b[j]);
    }
    return 0;
}
