#include<stdio.h>
#include<string.h>
int main()
{
	int t, i, j=0 ,k=0, count, l1, l2;
	char a[25],b[25];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		count=0;
		gets(a);
		gets(b);
		l1=strlen(a);
		l2=strlen(b);
		if(l1!=l2)
		{
			printf("No\n");
			continue;
		}
		for(i=0;i<l1;i++)
		{
			if (a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
				j=1;
			else
				j=0;
			if(b[i]=='a' ||b[i]=='e' ||b[i]=='i' ||b[i]=='o' ||b[i]=='u')
				k=1;
			else
				k=0;
			if(a[i]==b[i])
				count++;
			else if(j==1 && k==1 )
				count++;
		}
		if(count==l1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
