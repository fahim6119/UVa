#include<stdio.h>
int main()
{
    int t,x,i,r,j,count[101];
    double w;
    char a[1001],b[1001];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        for(i=0;i<=100;i++)
            count[i]=0;
        scanf("%s",a);
        for(i=0;a[i]!=0;i++)
        {
            if((a[i]=='C' || a[i]=='H' || a[i]=='O' ||a[i]=='N')&& ( a[i+1]=='C' || a[i+1]=='H' ||a[i+1]=='O' ||a[i+1]=='N' ||a[i+1]==0 ))
                count[a[i]]++;
            else if( a[i-1]=='C' || a[i-1]=='H' ||a[i-1]=='O' || a[i-1]=='N' )
            {
                if(a[i]>='0' && a[i]<='9' && ( a[i+1]=='C' || a[i+1]=='H' ||a[i+1]=='O' ||a[i+1]=='N' || a[i+1]==0 ))
                {
                    x=a[i]-'0';
                    count[a[i-1]]+=x;
                }
                else if(a[i]>='0' && a[i]<='9' && (a[i+1]>='0' && a[i+1]<='9'))
                {
                    r=a[i-1];
                    x=(a[i]-'0')*10+(a[i+1]-'0');
                    count[r]+=x;
                    i++;
                }
            }
        }
        w=count[67]*12.01 + count[72]*1.008 + count[78]*14.01 + count[79]*16.00 ;
        printf("%.3lf\n",w);
    }
    return 0;
}
