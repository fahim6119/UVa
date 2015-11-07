#include<stdio.h>
#include<string.h>
double factorial(int n);
int main()
{
    double fm,fn,fd,res;
    int m,n,i,j,dif;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        dif=n-m;
        res=factorial(n)/(factorial(m)* factorial(dif));
        printf("%d things taken %d at a time is %.0lf exactly.\n",n,m,res);
    }
    return 0;
}

double factorial(int n)
{
    double r=1;
    int i;
    for(i=2;i<=n;i++)
        r=r*i;
    return r;
}
