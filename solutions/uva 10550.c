#include<stdio.h>
int main()
{
    int a0,a1,a2,a3,b1,b2,b3,sum;
    while(scanf("%d %d %d %d",&a0,&a1,&a2,&a3)==4)
    {
        if(a0==0 && a1==0 && a2==0 && a3==0)
            break;
        b1=a0-a1;
        if(b1<0)
            b1=40+b1;
        b2=a2-a1;
        if(b2<0)
            b2=40+b2;
        b3=a2-a3;
        if(b3<0)
            b3=40+b3;
        sum=1080+ b1*9+b2*9+b3*9;
        printf("%d\n",sum);
    }
    return 0;
}
