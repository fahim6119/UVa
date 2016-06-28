#include<stdio.h>
#include<string.h>
void reverse(char a[]);
int main()
{
    int a,j,r,b=3,n;
    char c[10001];
    while(scanf("%d",&a)==1)
    {
        if(a<0)
            break;
        else if(a==0)
            printf("0\n");
        else
        {
            j=0;
            while(a!=0)
            {
                r=a%b;
                a=a/b;
                c[j++]=r+'0';
            }
            c[j]=0;
            reverse(c);
            puts(c);
        }
    }
    return 0;
}

void reverse(char a[])
{
    int i,j,l;
    char temp;
    l=strlen(a);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
