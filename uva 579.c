#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int m,h;
    float ha,ma,dif;
    char a[10];
    while(gets(a))
    {
        if(strcmp(a,"0:00")==0)
            break;
        if (a[1]==':')
        {
            h=a[0]-'0';
            m=(a[2]-'0')*10+(a[3]-'0');
        }
        else if (a[2]==':')
        {
            h=(a[0]-'0')*10+ a[1]-'0';
            m=(a[3]-'0')*10+(a[4]-'0');
        }
        ha=h*30.0+((float)m/60.0)*30.0;
        ma=m*6;
        if(ha>ma)
            dif=ha-ma;
        else
            dif=ma-ha;
        if(dif>180)
            dif=360-dif;
        printf("%.3f\n",dif);
    }
    return 0;
}
