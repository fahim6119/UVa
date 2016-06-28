#include<stdio.h>
int main()
{
    int a,b,c,d,l,i;
    long long int n;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        int count=0;
        for(i=0;i<=l;i++)
        {
            n=a*i*i + b*i +c;
            if(n%d==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
