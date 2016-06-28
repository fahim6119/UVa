#include<stdio.h>
int main()
{
    int a[55],i,t,j,k,n,temp,high,low;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        high=0;
        low=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
                high++;
            else if(a[j]>a[j+1])
                low++;
        }
        printf("Case %d: %d %d\n",k,high,low);
    }
    return 0;
}
