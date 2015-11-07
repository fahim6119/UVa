#include<stdio.h>
int main()
{
	int t,k,c0,d;
	float c,f,f0;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
    {
        scanf("%d %d",&c0,&d);
        f0=1.8*c0+32.0;
        f=f0+d;
        c=(5*f-160)/9;
        printf("Case %d: %.2f\n",k,c);
    }
	return 0;
}
