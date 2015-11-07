#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[100][100];
    int x,i,g,j,k,l;
    while(scanf("%d",&g)==1 && g!=0)
    {
        getchar();
        scanf("%s",a);
        x=strlen(a);
        l=x/g;
        for(i=0,k=0;i<x;k++)
        {
            for(j=l-1;j>=0;j--,i++)
            {
                b[k][j]=a[i];
            }
            b[k][l]='\0';
        }
        for(i=0;i<k;i++)
        {
            printf("%s",b[i]);
        }
        printf("\n");
    }
    return 0;
}
