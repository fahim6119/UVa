#include<stdio.h>
int divide();
int b,c,d,dif,min;
int main()
{
    int m,n,t,a,temp;
    while(scanf("%d %d %d",&m,&n,&t)==3)
    {
        min=0;
        dif=0;
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        if(t%m==0)
            a=t/m;
        else if(t%m==n)
            a=1+((t-n)/m);
        else
            a=divide(m,n,t);
        printf("%d",a);
        if(min>0)
            printf(" %d",min);
        printf("\n");
    }
    return 0;
}

int divide(int m, int n, int t)
{
    int i,a=0,max=0,p=0;

    for(i=1;n*i<=t;i++)
    {
        b=n*i;
        if((t-b)%m==0)
        {
            c=(t-b)/m;
            a=i+c;
            p=1;
        }
        if (a>max)
            max=a;
    }
    if(p==0)
    {
        min=100000;
        for(i=0;i*n<t;i++)
        {
            b=i*n;
            dif=(t-b)%m;
            c=(t-b)/m;
            a=i+c;
            if(dif<min)
            {
                min=dif;
                max=a;
            }
        }
    }
    return max;
}
