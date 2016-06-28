#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j,k,status[2002]={0};
    status[0]=status[1]=1;
    for(i=2;i<=50;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=2002;j+=i)
                status[j]=1;
    }
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int count[130]={0};
        char a[2002],temp,prime[1000]={'\0'};
        scanf("%s",a);
        for(k=0;a[k]!='\0';k++)
            count[a[k]]++;
        j=0;
        for(k=48;k<=122;k++)
            if (status[count[k]]==0)
                prime[j++]=k;
        if(prime[0]=='\0')
            printf("Case %d: empty\n",i);
        else
        {
            printf("Case %d: ",i);
            for(k=0;k<j;k++)
                printf("%c",prime[k]);
            printf("\n");
        }

    }
    return 0;
}
