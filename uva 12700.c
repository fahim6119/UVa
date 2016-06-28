#include<stdio.h>
int main()
{
    int i,te,j;
    char l[1001];
    scanf("%d",&te);
    for(i=1;i<=te;i++)
    {
        int a=0,b=0,w=0,t=0,n;
        scanf("%d",&n);
        scanf("%s",l);
        for(j=0;j<n;j++)
        {
            if(l[j]=='A')
                a++;
            else if (l[j]=='B')
                b++;
            else if (l[j]=='W')
                w++;
            else if(l[j]=='T')
                t++;
        }
        if(n==a)
            printf("Case %d: ABANDONED\n",i);
        else if(b==n-a)
            printf("Case %d: BANGLAWASH\n",i);
        else if(w==n-a)
            printf("Case %d: WHITEWASH\n",i);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n",i,b,t);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(b<w)
            printf("Case %d: WWW %d - %d\n",i,w,b);
    }
    return 0;
}
