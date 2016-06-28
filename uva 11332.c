#include<stdio.h>
int main()
{
    int n,sum,k,l;
    while((scanf("%d",&l))==1 && l!=0)
    {
        n=l;
        if (n<10)
        {
            printf("%d\n",n);
        }
        else if(n>9)
        {
            while(n>9)
            {
                sum=0;
                k=n;
                while(k>0)
                {
                    sum=sum+k%10;
                    k=k/10;
                }
                n=sum;
            }
            printf("%d\n",n);
        }
    }
    return 0;
}
