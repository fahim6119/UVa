#include<stdio.h>
int status[1000001]={0};
int main()
{
    int i,j,count,a,b;
    for(i=1;i<=1000;i++)
        status[i*i]=1;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        count=0;
        for(i=a;i<=b;i++)
            if(status[i]==1)
                count++;
        printf("%d\n",count);
    }
    return 0;
}
