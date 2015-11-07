#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        c=fabs(a-b);
        printf("%ld\n",c);
    }
    return 0;
}
