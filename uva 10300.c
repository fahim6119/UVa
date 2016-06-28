#include<stdio.h>
int main()
{
    int n,f,t,i,j;
    scanf("%d",&t);
    long long int s,a,e;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&f);
        long long int sum=0;
        for(j=0;j<f;j++)
        {
            scanf("%lld %lld %lld",&s,&a,&e);
            sum+=s*e;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
