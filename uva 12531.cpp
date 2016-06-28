#include<stdio.h>
#include<string.h>
int main()
{
    int ang[250];
    memset(ang,0,sizeof(ang));
    int m,h,n,i,j,k,l;
    for(i=0;i<=720;i++)
    {
        m=(6*i)%360;
        h=(6*(i/12))%360;
        k=(m-h+360)%360;
        if(k>180)
            k=360-k;
        ang[k]=1;
    }
    while(scanf("%d",&n)==1)
    {
        if(ang[n]==1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
