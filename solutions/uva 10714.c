#include<stdio.h>
int main()
{
    int t,l,n,x,maxd,maxm,d,m,i,j;
    t=2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&n);
        x=l/2;
        maxd=0,maxm=0;
        for(i=0;i<n;i++)
		{
            scanf("%d",&j);
            if(j>x)
                d=l-j;
            else
                d=j;
            if(d>maxd)
                maxd=d;
            if(j<l/2)
                m=l-j;
            else
                m=j;
            if(m>maxm)
                maxm=m;
        }
        printf("%d %d\n",maxd,maxm);
    }
    return 0;
}
