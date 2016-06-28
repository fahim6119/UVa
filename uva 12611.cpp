#include<stdio.h>
int main()
{
    int T,t,r,i;
    double l,w,x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&r);
        l=5.0*r;
        x1= -1* (l*45.0)/100.0;
        x4=x1;
        x2=(l*55.0)/100.0;
        x3=x2;
        w=(6*l)/10.0;
        y1=(w/2);
        y2=y1;
        y3= -1.0 *y1;
        y4=y3;
        printf("Case %d:\n",t);
        printf("%.0lf %.0lf\n",x1,y1);
        printf("%.0lf %.0lf\n",x2,y2);
        printf("%.0lf %.0lf\n",x3,y3);
        printf("%.0lf %.0lf\n",x4,y4);
    }
    return 0;
}
