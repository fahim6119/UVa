#include<stdio.h>
int main()
{
    int n,l,i,j;
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        l=1;
        if(n==1)
        {
            printf("Case %d: 0\n",j);
            continue;
        }
        for(i=1;l<n;i++)
        {
            l=l*2;
            if(l>=n)
                break;
        }
        printf("Case %d: %d\n",j,i);
    }
    return 0;
}
