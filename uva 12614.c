#include<stdio.h>
int main()
{
    int T,n,i,j,k,t,max=0;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            if(j>max)
                max=j;
        }
        printf("Case %d: %d\n",t,max);
    }
}
