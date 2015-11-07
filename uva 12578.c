#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int i,j,t;
    double l,w,r,a,g;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&l);
        w=(6*l)/10;
        r=l/5;
        a=pi*r*r;
        g=(w*l)-a;
        printf("%.2lf %.2lf\n",a,g);
    }
    return 0;
}
