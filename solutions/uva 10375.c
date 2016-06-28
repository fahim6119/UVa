#include<stdio.h>
#include<math.h>
long double combination(long double n,long double k,long double r,long double s);
int main()
{
    long double a,p,q,r,s;
    while(scanf("%Lf %Lf %Lf %Lf",&p,&q,&r,&s)==4)
    {
        a=combination(p,q,r,s);
        printf("%.5Lf\n",a);
    }
    return 0;
}

long double combination(long double n,long double k,long double r,long double s)
{
	long double a,b,res = 1.0,x,i,j;
    if(k>n-k)
        k =n - k;
    if(s>r-s)
        s= r-s;
    for (i = 1,j=1; (i <= k) || (j<=s) ; i++,j++)
    {
            a=(n +1- i)/i;
            if(i>k)
                a=1;
            b=(r+1-j)/j;
            if(j>s)
                b=1;
            x=a/b;
            res = res *x;
    }
    return res;
}
