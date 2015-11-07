#include <stdio.h>

int main()
{
    int a,p,b,T=1;
    while (scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        if(a-b<=0)
            p=0;
        else
            p=(int)(a-1)/b;
        if (p<=26)
        {
            printf ("Case %d: %d\n",T,p);
            T++;
        }
        else
        {
            printf ("Case %d: impossible\n",T);
            T++;
        }
    }
    return 0;
}
