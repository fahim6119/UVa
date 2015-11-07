#include<stdio.h>
#include<string.h>
int p[1006],w[1006],c[105],max[105],g,n;
int x[1006][102];
int maxi(int it, int wt,int cap)
{
    if(it==n)
        return 0;
    if(x[it][wt]!=-1)
        return x[it][wt];
    int pro1=0,pro2=0;
    if(w[it]+wt<=cap)
        pro1=p[it]+maxi(it+1,wt+w[it],cap);
    pro2=maxi(it+1,wt,cap);
    if(pro1>pro2)
        x[it][wt]=pro1;
    else
        x[it][wt]=pro2;
    return x[it][wt];
}

int main()
{
    int t,i,j,k,a,b,MAX;
    scanf("%d",&t);
    while(t--)
    {
        MAX=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d %d",&p[i],&w[i]);
        scanf("%d",&g);
        for(j=0;j<g;j++)
        {
            scanf("%d",&c[j]);
            memset(x,-1,sizeof(x));
            max[j]=maxi(0,0,c[j]);
            MAX+=max[j];
        }
        printf("%d\n",MAX);
    }
    return 0;
}

