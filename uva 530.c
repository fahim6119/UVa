#include<stdio.h>
#include<math.h>
long long combination(int n, int k);
int main()
{
    long long int d;
    int m,n;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        d=combination(n,m);
        printf("%lld\n",d);
    }
    return 0;
}

long long combination(int n, int k)
{
    if(k>n-k)
        k =n - k;
    long long int res = 1;
    int i;
    for (i = 1; i <= k; i++)
        res = res * (n - k + i) / i;
    return res;
}
