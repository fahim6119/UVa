#include<stdio.h>
int main()
{
	int n,i,j,b,c;
	long long int a[100]={0};
	a[0]=a[1]=1;
	for(i=2;i<=51;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(scanf("%d",&n)==1 && n!=0)
	{
		printf("%lld\n",a[n]);
	}
	return 0;
}