#include<stdio.h>
int main()
{
    long long int p,n;
    int i,j,k;
    while(scanf("%lld",&n)==1)
    {
        p=1;
        for(i=0;p<n;i++)
        {
            if(i%2==1)
                p=p*2;
            else
                p=p*9;
        }
        if(i%2==1)
            printf("Stan wins.\n");
        else
            printf("Ollie wins.\n");
    }
    return 0;
}
