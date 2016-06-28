#include<stdio.h>
int main()
{
    int N,Q,i,sum,t=0,j,min,p,max,count[10001],n[10001],q[10001],x;
    while(scanf("%d %d",&N,&Q)==2)
    {
        t++;
        if(N==0 && Q==0)
            break;
        for(i=0;i<=10000;i++)
            n[i]=0;
        max=-1,min=10001;
        for(i=0;i<N;i++)
        {
            scanf("%d",&x);
            n[x]++;
            if(x>max)
                max=x;
            if(x<min)
                min=x;
        }
        for(j=0;j<Q;j++)
            scanf("%d",&q[j]);
        sum=0;
        for(i=min-1;i<=max;i++)
        {
            sum+=n[i];
            count[i+1]=sum;
        }
        printf("CASE# %d:\n",t);
        for(i=0;i<Q;i++)
        {
            if(n[q[i]]==0)
                printf("%d not found\n",q[i]);
            else
                printf("%d found at %d\n",q[i],count[q[i]]+1);
        }
    }
    return 0;
}
