#include<stdio.h>
#include<string.h>
char r[1000],f[1000],s[1000];
int count[10];
void reverse(char r[]);
void multiplication(char s[],int k);
void factorial(int n);
void counter (int count[]);
int main()
{
    int i,l;
    while(scanf("%d",&l)>0)
    {
        int count[10]={0};
        if(l==0)
            break;
        factorial(l);
        printf("%d! --\n   ",l);
        counter(count);
    }
    return 0;
}

void counter (int count[])
{
    int i,l,m,n;
    l=strlen(f);
    for(i=0;i<l;i++)
    {
        m=f[i]-48;
        count[m]++;
    }
        for(i=0;i<10;i++)
        {
            printf("(%d)%5d    ",i,count[i]);
            if(i==4)
            {
                printf("\n   ");
            }
        }
        printf("\n");
}

void factorial(int n)
{
    int i;
    strcpy(s,"1");
    for(i=2;i<=n;i++)
        multiplication(s,i);
    strcpy(f,s);
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
    char temp[1001];
    l=strlen(r);
    for(i=l-1,j=0;i+1!=0;i--,j++)
    {
        temp[j]=r[i];
    }
    temp[j]='\0';
    strcpy(r,temp);
}
