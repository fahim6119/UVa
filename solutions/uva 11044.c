#include<stdio.h>
int main()
{
    int t,m,n,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        min=((int)(m/3))*((int)(n/3));
        printf("%d\n",min);
    }
    return 0;
}
