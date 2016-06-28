#include<stdio.h>
#include<string.h>
int str_add(char c_a[],char c_b[]);
void reverse(char a[]);
void int_str(long long int a,char c[]);
char a[1000],b[1000],c[1000];
int main()
{
    long long int x,y,count;
    while(scanf("%lld %lld",&x,&y)==2)
    {
        if(x==0 && y==0)
            break;
        int_str(x,a);
        int_str(y,b);
        count=str_add(a,b);
	if(count==0)
		printf("No carry operation.\n");
	else if(count==1)
		printf("1 carry operation.\n");
        else
		printf("%d carry operations.\n",count);
    }
    return 0;
}
int str_add(char c_a[],char c_b[])
{
    char a[1000],b[1000];
    int p,z,x,r,i,j,l,lmin,la,lb,k,count=0;
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
        if(p>0)
            count++;
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
        if(p>0)
            count++;
    }
    c[k]=0;
    reverse(c);
    return count;
}

void int_str(long long int a,char c[])
{
    int m,r,j=0;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c[j++]=r+'0';
    }
    c[j]=0;
    reverse(c);
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

