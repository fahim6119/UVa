#include<stdio.h>
int main()
{
	int a,f,t,i,T,j,k;
	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
        if(t!=0)
			printf("\n");
		getchar();
		scanf("%d %d",&a,&f);
		for(i=1;i<=f;i++)
		{
			for(j=1;j<=a;j++)
			{
				for(k=1;k<=j;k++)
					printf("%d",j);
				printf("\n");
			}
			for(j=a-1;j>0;j--)
			{
				for(k=j;k>0;k--)
					printf("%d",j);
				printf("\n");
			}
			if(i!=f)
				printf("\n");
		}
	}
	return 0;
}
