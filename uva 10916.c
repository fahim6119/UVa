#include<stdio.h>
#include<math.h>
int main()
{
    int y,i,z,a,b,l,ans;
    double x,c,f,fl;
    x=log10(2);
    while(scanf("%d",&y)==1)
    {
        if(y==0)
            break;
        a=(y-1940)/10;
        b=pow(2,a);
        c=b*x;
        f=0;
        for(i=2;f<c;i++)
        {
            fl=log10(i);
            f+=fl;
        }
        if(f>c)
            printf("%d\n",i-2);
        else if(f==c)
            printf("%d\n",i-1);
    }
    return 0;
}
