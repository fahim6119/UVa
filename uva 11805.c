#include<stdio.h>
int main()
{
    int n,l,k,p,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        l=(k+p-1)%n+1;
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
