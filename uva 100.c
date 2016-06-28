#include<stdio.h>
int counter(int n)
{
    int count=0;
    for(;;count++)
    {
        if(n==1)
        {
            count++;
            break;
        }
        else if(n%2==1)
            n=3*n+1;
        else
            n=n/2;
    }
    return count;
}

int main()
{
    int i,j,k,c,max;
    while(scanf("%d%d",&i,&j)==2)
    {
        max=0;
        if (i < j)
        {
            for(k=i;k<=j;k++)
            {
                c=counter(k);
                if(c>max)
                    max=c;
            }
        }
        else if (i > j)
        {
            for(k=j;k<=i;k++)
            {
                c=counter(k);
                if(c>max)
                    max=c;
            }
        }
        else if(i==j)
            max=counter(i);
        printf("%d %d %d\n",i,j,max);
    }
    return 0;
}
