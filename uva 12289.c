#include<stdio.h>
#include<string.h>
int count(char a[]);
char l[10],o[10]="one";
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x;
        scanf("%s",l);
        x=strlen(l);
        if(x==5)
        {
            printf("3\n");
            continue;
        }
        else
        {
         x=count(l);
         printf("%d\n",x);
        }
    }
}

int count(char a[])
{
    int count=0,i;
    for(i=0;i<3;i++)
        if(a[i]==o[i])
            count++;
    if(count==1 || count == 0)
        return 2;
    else
        return 1;
}
