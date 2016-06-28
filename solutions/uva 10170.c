#include<stdio.h>
#include<math.h>
int main()
{
    long long int d,n;
    int k,c,g,i;
    float x,f;
    while(scanf("%d %lld",&c,&d)==2)
    {
        g=c*(c-1);
        x=sqrt(1+8*d+4*g);
        f=(x-1)/2;
        n=ceil(f);
        printf("%d\n",n);
    }
    return 0;
}
