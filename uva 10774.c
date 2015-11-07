#include<stdio.h>
int main()
{
    int j,n,a,i,T,counter,t,last;
    int status[30001]={0};
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        counter=0;
        last=n;
        while(1)
        {
            for(i=0;i<=30000;i++)
                status[i]=0;
            j=0,a=0;
            n=last;
            for(i=1;j<n-1;i++)
            {
                if(a==1 && status[i]==0)
                {
                    status[i]=1;
                    j++;
                    a=0;
                }
                if(status[i]==0)
                    a=1;
                if(i==n)
                    i=0;
            }
            for(i=1;i<=n;i++)
                if(status[i]==0)
                    last=i;
            if(last==n)
                break;
            counter++;
        }
        printf("Case %d: %d %d\n",t,counter,last);
    }
    return 0;
}
