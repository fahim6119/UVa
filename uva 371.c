#include<stdio.h>
int counter(long long int n)
{
    int count=0;
    if(n==1)
    {
        n=3*n+1;
        count++;
    }
    for(;n!=1;count++)
    {
        if(n%2==1)
            n=3*n+1;
        else if(n%2==0)
            n=n/2;
    }
    return count;
}

int main()
{
    int i,j,max,maxi,c,temp;
    long long int k;
    while(scanf("%d%d",&i,&j)==2)
    {
        if(i==0 && j==0)
            break;
        max=0;
        if (i > j)
        {
            temp=i;
            i=j;
            j=temp;
        }
        for(k=i;k<=j;k++)
        {
            c=counter(k);
            if(c>max)
            {
                max=c;
                maxi=k;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",i,j,maxi,max);
    }
    return 0;
}
