#include<stdio.h>
int status[10001]={0};
int main()
{
    int m,n,i,j,k,x;
    status[0]=status[1]=1;
    for(i=2;i<=100;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=10000;j+=i)
                status[j]=1;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        for(j=n/2+1;status[j]!=0;j++);
        printf("%d\n",j);
    }
    return 0;
}
