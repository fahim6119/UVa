#include<stdio.h>
int main()
{
    long long int a;
    int i,n;
    while(scanf("%d",&n)==1)
    {
        a=1;
        if(n>=0)
        {
            for(i=1;i<=n;i++)
            {
                a=a*i;
                if(a>6227020800)
                {
                    printf("Overflow!\n");
                    break;
                }
            }
            if(a>=10000 && a<=6227020800)
                printf("%lld\n",a);
            else if( a<10000)
                printf("Underflow!\n");
        }
        if(n<0 && n%2==0)
            printf("Underflow!\n");
        else if(n<0 && n%2!=0)
            printf("Overflow!\n");
    }
    return 0;
}
