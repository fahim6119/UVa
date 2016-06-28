#include<stdio.h>
int main()
{
    unsigned long long int b,c,x,y,z,a;
    int i,j;
    while(scanf("%llu",&c)==1)
    {
        y=0;
        if(c==0)
            break;
        z=c+c/9;
        if(c%9==0)
            y=z-1;
        if(y>0)
            printf("%llu %llu\n",y,z);
        else
            printf("%llu\n",z);
    }
    return 0;
}
