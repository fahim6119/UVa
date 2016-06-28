#include<stdio.h>
int main()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        x=n*(n+1)*(2*n+1)/6;
        printf("%d\n",x);
    }
    return 0;
}
