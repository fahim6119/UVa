#include<stdio.h>
int main()
{
    int t,n,i,j,k,cases;
    double a0,an1,a1,sum;
    scanf("%d",&cases);
    for(t=1;t<=cases;t++)
    {
        if(t>1)
            printf("\n");
        sum=0;
        double c[3001]={0};
        scanf("%d",&n);
        scanf("%lf %lf",&a0,&an1);
        for(i=1;i<=n;i++)
            scanf("%lf",&c[i]);
        k=n+1;
        for(i=1;i<=n;i++)
        {
            sum+=2*(k-i)*c[i];
        }
        a1=(n*a0+an1-sum)/(n+1);
        printf("%.2lf\n",a1);
    }
    return 0;
}
