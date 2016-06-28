#include<stdio.h>
#include<string.h>
char r[100000],s[100000],a[1001][2600];
void reverse(char r[]);
void multiplication(char s[],int k);
void factorial(int n);
int main()
{
    int l;
    factorial(1000);
    strcpy(a[0],"1");
    strcpy(a[1],"1");
    while(scanf("%d",&l)>0)
    {
        printf("%d!\n",l);
        puts(a[l]);
    }
    return 0;
}

void factorial(int n)
{
    int i;
    strcpy(s,"1");
    for(i=2;i<=n;i++)
    {
        multiplication(s,i);
        strcpy(a[i],s);
    }
}

void multiplication(char s[],int k)
{
    int i,j,m;
    int len=strlen(s);
    int c=0;
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        m=(s[i]-'0')*k+c;
        r[j]=(m%10)+'0';
        c=m/10;
    }
    while(c>0)
    {
        r[j++]=(c%10)+'0';
        c=c/10;
    }
    r[j]=0;
    reverse(r);
    strcpy(s,r);
}

void reverse(char r[])
{
    int i,j,l;
    char temp[3000];
    l=strlen(r);
    for(i=l-1,j=0;i+1!=0;i--,j++)
    {
        temp[j]=r[i];
    }
    temp[j]='\0';
    strcpy(r,temp);
}
