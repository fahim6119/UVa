#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char a[]);
void str_add(char c_a[],char c_b[]);
char b[10000],a[1000],c[1000],ori[100],rev[100];
int main()
{
    int t;
	scanf("%d",&t);
	getchar();
    while(t--)
    {
        int y=0;
        int count=0;
		gets(a);
		strcpy(ori,a);
        strcpy(rev,ori);
        reverse(rev);
        str_add(rev,ori);
        strcpy(ori,c);
        count++;
        while(1)
        {
            strcpy(rev,ori);
			reverse(rev);
			if(strcmp(ori,rev)==0)
			{
				printf("%d %s\n",count,ori);
				break;
			}
            str_add(rev,ori);
            strcpy(ori,c);
			count++;
        }
    }
    return 0;
}

void reverse(char r[])
{
    int i,j,l;
    char temp[1001];
    l=strlen(r);
    for(i=l-1,j=0;i+1!=0;i--,j++)
    {
        temp[j]=r[i];
    }
    temp[j]='\0';
    strcpy(r,temp);
}

void str_add(char c_a[],char c_b[])
{
    char a[1000],b[1000];
    int p,z,x,r,i,j,l,lmin,la,lb,k;
    la=strlen(c_a);
    lb=strlen(c_b);
    if(la>lb)
    {
        strcpy(a,c_a);
        strcpy(b,c_b);
        l=la;
        lmin=lb;
    }
    else
    {
        strcpy(a,c_b);
        strcpy(b,c_a);
        l=lb;
        lmin=la;
    }
    reverse(a);
    reverse(b);
    p=0;
    for(i=0,j=0,k=0;k<lmin;k++,i++,j++)
    {
        r=(a[i]-'0')+(b[j]-'0')+p;
        z=r%10;
        c[k]=z+'0';
        p=r/10;
    }
    while(k<l||p>0)
    {
        if(k==l)
            r=p;
        else
            r=(a[i++]-'0')+p;
        z=r%10;
        c[k++]=z+'0';
        p=r/10;
    }
    c[k]=0;
    reverse(c);
}
