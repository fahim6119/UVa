#include<stdio.h>
int main()
{
    long long int a[3],max,sum,maxi;
    int i,l,t;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        max=0;
        sum=0;
        for(i=0;i<3;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
                maxi=i;
            }
        }
        for(i=0;i<3;i++)
           if(i!=maxi)
                sum+=a[i];
        if(sum<=max)
            printf("Case %d: Invalid\n",l);
        else if(a[0]==a[1] && a[1]==a[2])
            printf("Case %d: Equilateral\n",l);
        else if((a[0]!=a[1] && a[1]==a[2]) || (a[1]!=a[2] && a[0]==a[2]) || (a[0]!=a[2] && a[0]==a[1]))
            printf("Case %d: Isosceles\n",l);
        else if(a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2])
            printf("Case %d: Scalene\n",l);
    }
    return 0;
}
