#include<stdio.h>
int main()
{
    long long int n,i,a,b;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}
