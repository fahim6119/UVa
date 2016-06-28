#include<stdio.h>
int main()
{
    int a,x;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        x=f91(a);
        printf("f91(%d) = %d\n",a,x);
    }
    return 0;
}

int f91(int n)
{
    int m;
    if(n<=100)
    {
        m=f91(n+11);
        n=f91(m);
    }
    else if(n>=101)
        n=n-10;
    return n;
}
