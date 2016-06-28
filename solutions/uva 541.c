#include<stdio.h>
int main()
{
    int n,i,j,a[102][102];
    while(scanf("%d",&n)==1)
    {
        int r[102]={0},c[102]={0},cr=0,cc=0,changer,changec;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
                r[i]+=a[i][j];
                c[j]+=a[i][j];
            }
        for(i=1;i<=n;i++)
        {
            if(r[i]%2==1)
            {
                cr++;
                changer=i;
            }
            if(c[i]%2==1)
            {
                cc++;
                changec=i;
            }

        }
        if(cr==0 && cc==0)
            printf("OK\n");
        else if (cr>1 || cc>1)
            printf("Corrupt\n");
        else if (cr==1 && cc==1)
            printf("Change bit (%d,%d)\n",changer,changec);
    }
    return 0;
}
