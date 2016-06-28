#include<stdio.h>
int main()
{
    int n,i;
    long long int m,temp,f,total;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;
        m=0,f=1,temp=0;
        for(i=1;i<=n;i++)
        {
            m=f+m;
            f=temp+1;
            temp=m;
        }
        total=temp+f;
        printf("%lld %lld\n",m,total);
    }
    return 0;
}
