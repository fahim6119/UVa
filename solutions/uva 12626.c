#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,l[100],min;
    char b[1000];
    memset(l,0,sizeof(l));
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        min=1000;
        gets(b);
        l[65]=0;
        l[77]=0;
        l[82]=0;
        l[71]=0;
        l[73]=0;
        l[84]=0;
        for(i=0;b[i]!=0;i++)
        {
            l[b[i]]++;
        }
        l[65]/=3;
        l[82]/=2;
        if(l[65]<min)
            min=l[65];
        if(l[77]<min)
            min=l[77];
        if(l[82]<min)
            min=l[82];
        if(l[71]<min)
            min=l[71];
        if(l[73]<min)
            min=l[73];
        if(l[84]<min)
            min=l[84];
        printf("%d\n",min);
    }
    return 0;
}
