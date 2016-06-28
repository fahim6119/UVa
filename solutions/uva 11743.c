#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],d[6],e[6],f[6];
    int n,b,c,i,j,r;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int sum=0;
        scanf("%s %s %s %s",a,d,e,f);
        strcat(a,d);
        strcat(a,e);
        strcat(a,f);
        int l=strlen(a);
        for(i=l-2;i>=0;i-=2)
        {
            b=a[i]-'0';
            c=2*b;
            while(c>0)
            {
                sum+=c%10;
                c=c/10;
            }
        }
        for(i=l-1;i>=1;i-=2)
        {
            b=a[i]-'0';
            sum+=b;
        }
        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
