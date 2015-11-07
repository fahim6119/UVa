#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,day[101],d,i,j;
    char a[102],b[102][22],sub[22];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s",b[j]);
            scanf("%d",&day[j]);
        }
        scanf("%d",&d);
        scanf("%s",sub);
        int req=1000;
        for(j=0;j<n;j++)
            if(strcmp(b[j],sub)==0)
            {
                req=day[j];
                break;
            }
        if(req<=d)
            printf("Case %d: Yesss\n",i);
        else if(req>d && req<=d+5)
            printf("Case %d: Late\n",i);
        else if(req>d+5)
            printf("Case %d: Do your own homework!\n",i);
    }
    return 0;
}
