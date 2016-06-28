#include<stdio.h>
int main()
{
    int t,n,k,i,a[15];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(k=1;k<=n;k++)
            scanf("%d",&a[k]);
        printf("Case %d: %d\n",i,a[(k+1)/2]);
    }
    return 0;
}
