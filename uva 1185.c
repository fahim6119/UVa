#include<stdio.h>
#include<math.h>
double x[10000001];
int main()
{
    int n,t,i;
    double f,sum=0;
    x[0]=0;
    for(i=1;i<=10000000;i++)
    {
        x[i]=x[i-1]+log10(i);
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%.0lf\n",floor(x[n])+1.0);
    }
    return 0;
}

