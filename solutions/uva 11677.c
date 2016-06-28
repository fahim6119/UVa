#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,ans;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(m2<m1)
        {
            m2=m2+60;
            h2=h2-1;
        }
        if(h2<h1)
            h2=h2+24;
        ans=(h2-h1)*60+(m2-m1);
        printf("%d\n",ans);
    }
    return 0;
}
