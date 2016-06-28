#include<stdio.h>
int main()
{
    int t=1,i,d,j,k,h,s,l;
    long long int a,b,c;
    while(scanf("%lld",&a)==1)
    {
        printf("%4d.",t);
        if(a==0)
            printf(" %d",a);
        b=a;
        k=b/10000000;
        b=b%10000000;
        if(k<100 && k>0)
            printf(" %d kuti",k);
        else if(k>=100)
            {
                c=k;
                k=c/10000000;
                if(k>0)
                    printf(" %d kuti",k);
                c=c%10000000;
                l=c/100000;
                if(l>0)
                    printf(" %d lakh",l);
                c=c%100000;
                h=c/1000;
                if(h>0)
                    printf(" %d hajar",h);
                c=c%1000;
                s=c/100;
                if(s>0)
                    printf(" %d shata",s);
                d=c%100;
                c=c/100;
                if(d>0)
                    printf(" %d",d);
                printf(" kuti");
            }
        c=b;
        l=c/100000;
        if(l>0)
            printf(" %d lakh",l);
        c=c%100000;
        h=c/1000;
        if(h>0)
            printf(" %d hajar",h);
        c=c%1000;
        s=c/100;
        if(s>0)
            printf(" %d shata",s);
        d=c%100;
        if(d>0)
            printf(" %d",d);
        t++;
        printf("\n");
    }
    return 0;
}
