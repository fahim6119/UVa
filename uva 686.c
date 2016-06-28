#include<stdio.h>
int status[1000001]={0},a[1000001]={0};
int main()
{
    int b,n,i,j,k=0,count;
    status[0]=status[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=1000000;j=j+i)
            {
                status[j]=1;
            }
    }
    for(i=0,k=0;i<=32768;i++)
        if(status[i]==0)
        {
            a[k++]=i;
        }
    while(1)
    {
        scanf("%d",&n);
        count=0;
        if(n==0)
            break;
        for(i=0;a[i]<=n/2;i++)
       {
           b=n-a[i];
           if(status[b]==0)
                count++;
       }
       printf("%d\n",count);
    }
    return 0;
}
