#include<stdio.h>
#include<string.h>
void reverse(char a[]);
int main()
{
    long long int x;
    int i,j,r,count,l;
    char a[100];
    while(scanf("%lld",&x)>0 && x!=0)
    {   j=0;
        count=0;
        while(x>0)
        {
            r=x%2;
            a[j++]=r+48;
            x=(x-r)/2;
        }
        a[j]=0;
        reverse(a);
        l=strlen(a);
        for(i=0;i<l;i++)
            if(a[i]=='1')
                count++;
        printf("The parity of %s is %d (mod 2).\n",a,count);
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

