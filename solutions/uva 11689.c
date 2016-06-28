#include<stdio.h>
int main()
{
    int n,b,e,f,d,c,i,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        b=e+f;
        d=0;
        while(b>=c)
        {
            l=b/c;
            d=d+l;
            b=b%c+l;
        }
        printf("%d\n",d);
    }
    return 0;
}
