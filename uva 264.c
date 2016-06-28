#include<stdio.h>
int main()
{
    int n,d,ax,a,b;//d=diagonal no....a=Numerator....b=Denominator....ax=element no.
    while(scanf("%d",&n)==1)
    {
        ax=1;
        d=1;
        while(ax<n)//Detects in which diagonal, n is placed
        {
            d++;//Beginning of a Diagonal
            ax=ax+d;//Last element of a Diagonal
        }
        if(d%2==0)//Even diagonals start from 1/d to d/1
        {
            a=1;
            b=d;
            ax=d*(d-1)/2+1;//First element of diagonal d
            while(ax!=n)
            {
                a++;
                b--;
                ax++;
            }
        }
        else//Odd diagonals start from d/1 to 1/d
        {
            a=d;
            b=1;
            ax=d*(d-1)/2+1;
            while(ax!=n)
            {
                a--;
                b++;
                ax++;
            }
        }
        printf("TERM %d IS %d/%d",n,a,b);
    }
    return 0;
}
