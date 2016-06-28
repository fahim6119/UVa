#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,k;
    char a[100010],temp;
    while(gets(a))
    {
        l=strlen(a);
        k=a[0]-48;
        for(i=1;i<l;i++)
        {
            if(a[i]>=48 && a[i]<=57)
            {
                if(a[i-1]>=48 && a[i-1]<=57)
                    k=k+a[i]-48;
                else
                    k=a[i]-48;
            }
            else if(a[i]=='b')
                for(j=0;j<k;j++)
                    printf("%c",32);
            else if(a[i]=='!')
                    printf("\n");
            else
                for(j=0;j<k;j++)
                    printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
