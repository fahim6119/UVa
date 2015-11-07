#include<stdio.h>
int main()
{
	int t,n,p,h[101],i,j,k,count,status[3651]={0};
	scanf("%d",&t);
	while(t--)
	{
	    for(i=0;i<=3650;i++)
            status[i]=0;
		count=0;
		scanf("%d",&n);
		scanf("%d",&p);
		for(i=0;i<p;i++)
			scanf("%d",&h[i]);
		for(i=0;i<p;i++)
		{
			k=h[i];
			if(status[k]==0)
				for(j=k;j<=n;j=j+k)
					status[j]=1;
		}
		for(i=6;i<=7;i++)
		{
			for(j=i;j<=n;j=j+7)
				status[j]=0;
		}
		for(i=1;i<=n;i++)
			if (status[i]==1)
				count++;
		printf("%d\n",count);
	}
	return 0;
}
