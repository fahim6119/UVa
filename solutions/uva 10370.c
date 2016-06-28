#include<stdio.h>
int main()
{
    int n,k,l,i,j,t,a[1005],sum,av,move;
    float x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int count=0;
        move=0;
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        av=sum/n;
        for(j=0;j<n;j++)
            if(a[j]>av)
                count++;
        x=(float)count*100/n;
        printf("%.3f%%\n",x);
    }
    return 0;
}
