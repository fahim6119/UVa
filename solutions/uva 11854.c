#include<stdio.h>
int main()
{
    int a[3],max,sum,i,maxi,sumi;
    while(1)
    {
        max=0;
        sum=0;
        for(i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
                maxi=i;
            }
        }
        if(a[0]==0 && a[1]==0 && a[2]==0)
            break;
        for(i=0;i<3;i++)
        {   if(i!=maxi)
                sum+=a[i]*a[i];
        }
        sumi=max*max;
        if(sumi==sum)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
