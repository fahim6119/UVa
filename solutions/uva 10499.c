#include<stdio.h>
int main()
{
    long long int n,p;
    while(1)
    {
        scanf("%lld",&n);
        p=25*n;
        if(n<0)
            break;
        else if(n==1)
            printf("0%%\n");
        else
            printf("%lld%%\n",p);
    }
    return 0;
}
