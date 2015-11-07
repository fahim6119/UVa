#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	long long int a=1,b=0,x,n;
	double m,l;
	for(i=1;i<=10;i++)
	{
		n=6*a-b;
		b=a;
		a=n;
		l=(8*n*n+1);
		m=sqrt(l);
		x=(m-1)/2;
		printf("%10lld%10lld\n",n,x);
	}
	return 0;
}