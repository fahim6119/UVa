#include<stdio.h>
#include<string.h>
int age[2000001]={0},times[2000001]={0},min=1000;
int main()
{
	int n,i,j,k;
	while(scanf("%d",&n)==1 && n!=0)
	{
	    min=1000;
	    memset(age,0,sizeof(age));
	    memset(times,0,sizeof(times));
		for(i=0;i<n;i++)
		{
			scanf("%d",&j);
			age[j]=j;
			times[j]++;
			if(j<min)
				min=j;
		}
		for(i=0;i<100;i++)
		{
			if(age[i]!=0)
			{
				for(k=0;k<times[i];k++)
				{
					if(i==min && k==0);
					else
						printf(" ");
					printf("%d",age[i]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
