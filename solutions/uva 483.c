#include<stdio.h>
#include<string.h>
void swap(char a[]);
int main()
{
    int i,x,j,k;
    char a[100001],b[102][102];
    while(gets(a))
    {
        x=strlen(a);
        for(i=0,k=0;i<x;i++,k++)
        {
            for(j=0;a[i]!=' ';j++,i++)
                b[k][j]=a[i];
            b[k][j]='\0';
        }
        for(i=0;i<k-1;i++)
        {
            swap(b[i]);
            printf("%s ",b[i]);
        }
        swap(b[i]);
        printf("%s\n",b[i]);
    }
    return 0;
}
void swap(char a[])
{
    int x,i,j;
    char temp;
    x=strlen(a);
    for(i=0,j=x-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return ;
}
