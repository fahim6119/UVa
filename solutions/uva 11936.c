#include<stdio.h>
int main()
{
    int a[3],max,sum,i,l,t,maxi;
    scanf("%d",&t);
    for(l=0;l<t;l++)
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
        for(i=0;i<3;i++)
           if(i!=maxi)
                sum+=a[i];
        if(sum>max)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
