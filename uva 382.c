#include<stdio.h>
int main()
{
    int i,j,n;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        int d[100000]={0};
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=30000;i++)
            for(j=i+i;j<=64000;j=j+i)
                d[j]+=i;
        if(d[n]<n)
            printf("%5d  DEFICIENT\n",n);
        else if(d[n]==n)
            printf("%5d  PERFECT\n",n);
        else if(d[n]>n)
            printf("%5d  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
