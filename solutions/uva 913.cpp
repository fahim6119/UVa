#include<stdio.h>
int main()
{
	long long int i,j,k,n,d,sum;
	while(scanf("%lld",&n)==1)
	{
	    k=(n+1)/2;
	    d=k*k;
		sum=(2*d-1)*3-6;
		printf("%lld\n",sum);
	}
	return 0;
}
