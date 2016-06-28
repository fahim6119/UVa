#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,count[105][105];
    char a[105][105];
    int field=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<105;i++)
            for(j=0;j<105;j++)
            {
                count[i][j]=0;
            }
        getchar();
        if(n==0 && m==0)
            break;
        field++;
        for(i=0;i<=m+1;i++)
            a[0][i]='.';
        for(i=0;i<=n+1;i++)
            a[i][0]='.';
        for(i=0;i<=n+1;i++)
            a[i][m+1]='.';
        for(i=0;i<=m+1;i++)
            a[n+1][i]='.';
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                scanf("%c",&a[i][j]);
            getchar();
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                {
                    if(a[i][j]=='*')
                    {
                        count[i][j+1]++;
                        count[i][j-1]++;
                        count[i+1][j]++;
                        count[i+1][j+1]++;
                        count[i+1][j-1]++;
                        count[i-1][j]++;
                        count[i-1][j+1]++;
                        count[i-1][j-1]++;
                        count[i][j]=-6;
                    }
                }
        }
        if(field>1)
            printf("\n");
        printf("Field #%d:\n",field);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]=='*')
                    printf("*");
                else
                    printf("%d",count[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
