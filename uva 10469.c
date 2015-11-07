#include<stdio.h>
#include<string.h>
#include<math.h>
void reverse(char a[]);
void int_binary(unsigned int a,char b[]);
void str_add(char c_a[],char c_b[],char c[]);
unsigned int binary_int(char b[]);
int main()
{
    unsigned int a1,a2,r;
    char b[100],f1[100],f2[100],f[101];
    while(scanf("%u %u",&a1,&a2)==2)
    {
        int_binary(a1,b);
        strcpy(f1,b);
        int_binary(a2,b);
        strcpy(f2,b);
        str_add(f1,f2,f);
        r=binary_int(f);
        printf("%u\n",r);
    }
    return 0;
}

void int_binary(unsigned int a,char b[])
{
    int j=0,r;
    while(a>0)
    {
        r=a%2;
        a=(a-r)/2;
        b[j++]=r+'0';
    }
    b[j]=0;
    reverse(b);
}

unsigned int binary_int(char b[])
{
    int i,j,l,m=0;
    l=strlen(b);
    reverse(b);
    for(i=0;i<l;i++)
    {
        j=(b[i]-'0')*(pow(2,i));
        m+=j;
    }
    return m;
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


void str_add(char c_a[],char c_b[],char c[])
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
        r=(a[i]-'0')+(b[j]-'0');
        z=r%10;
        if(z==2)
            z=0;
        c[k]=z+'0';
    }
  while(k<l||p>0)
    {
        r=(a[i++]-'0');
        z=r%10;
        c[k++]=z+'0';
    }
    c[k]=0;
    reverse(c);
}

