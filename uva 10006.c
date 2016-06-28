#include<stdio.h>
int main()
{
    int i,j,n;
    int a[]={561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973,75361};
    while(scanf("%d",&n)==1 && n!=0)
    {
        int c=0;
        for(i=0;a[i]<=n;i++)
        {
            if(a[i]==n)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            printf("The number %d is a Carmichael number.\n",n);
        else
            printf("%d is normal.\n",n);
    }
    return 0;
}
