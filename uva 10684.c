#include<stdio.h>
int main()
{
    int n,sum,i,max,a[10001];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            if(sum>max)
                max=sum;
            else if(sum<0)
                sum=0;
        }
        if(max>0)
            printf("The maximum winning streak is %d.\n",max);
        else
            printf("Losing streak.\n");
    }
    return 0;
}
