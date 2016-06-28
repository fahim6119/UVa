#include<stdio.h>
#include<math.h>
int fibo[ 18 ];
int main()
{
    double m,df[1003]={0};
    int i,j,n;
    fibo[ 0 ] = 0;
    fibo[ 1 ] = 1;
    for(i=2; i<18; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
    for(i=1;i<=1000;i++)
    {
        m=1.6*i;
        for(j=0;j<16 && fibo[j]<=i;j++)
        {
            if(fabs(m-(fibo[j+1]+df[i-fibo[j]]))<fabs(m-df[i]))
                df[i]=fibo[j+1]+df[i-fibo[j]];
        }
    }
    while(scanf("%d",&n)==1 && n!=0)
    {
        printf("%.2lf\n",fabs(1.6*n-df[n]));
    }
    return 0;
}
