#include<stdio.h>
int main()
{
    int n,d,a,temp,i;
    while(scanf("%d %d",&n,&d)==2)
    {
        for(i=0;d!=0;i++)
        {
            a=n/d;
            if(i==0)
                printf("[%d",a);
            else if(i==1)
                printf(";%d",a);
            else
                printf(",%d",a);
            temp=n-(d*a);
            n=d;
            d=temp;
        }
        printf("]\n");
    }
    return 0;
}
