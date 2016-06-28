#include<stdio.h>
#include<math.h>
int status[50]={0},a[50]={0};
int main()
{
    long long int x;
    int i,j,k,n;
    a[2]=1;
    a[3]=1;
    a[5]=1;
    a[7]=1;
    a[13]=1;
    a[17]=1;
    a[19]=1;
    a[31]=1;
    status[0]=status[1]=1;
    for(i=2;i<=6;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=32;j+=i)
                status[j]=1;
    }
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(status[n]==1 && a[n]==0)
            printf("Given number is NOT prime! NO perfect number is available.\n");
        else if(status[n]==0 && a[n]==0)
            printf("Given number is prime. But, NO perfect number is available.\n");
        else if(status[n]==0 && a[n]==1)
        {
            x=pow(2,(n-1))*(pow(2,n)-1);
            printf("Perfect: %lld!\n",x);
        }
    }
    return 0;
}

