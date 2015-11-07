#include<stdio.h>
int main()
{
    long long int n,a[3500],d,i,j;
    char status[3500];
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            status[i]=0;
            scanf("%lld",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                d=a[i]-a[i+1];
            else
                d=a[i+1]-a[i];
            status[d]=1;
        }
        for(i=1;i<n;i++)
            if(status[i]==0)
                break;
        if(i==n)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
