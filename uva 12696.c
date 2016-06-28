#include<stdio.h>
int main()
{
    int t,i,j,flag,count;
    count=0;
    scanf("%d",&t);
    double l,w,d,sum,wi;
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&wi);
        flag=1;
        sum=l+w+d;
        if((l>56.00 || w>45.00 || d>25.00)  && sum>125.00 )
        {
            flag=0;
        }
        if(wi>7.00)
        {
            flag=0;
        }
        if(flag==1)
            count++;
        printf("%d\n",flag);
    }
    printf("%d\n",count);
    return 0;
}
