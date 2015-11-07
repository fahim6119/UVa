#include<stdio.h>
char a[100000];
int main()
{
    long long int c,w,i;
    while(gets(a))
    {
        w=0;
        for(i=0;;i++)
        {
            if ((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
                c=1;
            else
                c=0;
            if(c==0 && ((a[i-1]>='A' && a[i-1]<='Z')||(a[i-1]>='a' && a[i-1]<='z')) )
                w++;
            if (a[i]=='\0')
                break;
        }
        printf("%lld\n",w);
    }
    return 0;
}
