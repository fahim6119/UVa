#include<stdio.h>
#include<math.h>
int i,j,c,r;
void even(int n,int k);
void odd(int n,int k);
int main()
{
    long long int n,k,z;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        k=(int)sqrt(n);
        if(k%2==0)
            even(n,k);
        else
            odd(n,k);
        printf("%d %d\n",c,r);
    }
    return 0;
}

void even(int n,int k)
{
    if(k*k==n)
    {
        c=k;
        r=1;
        return ;
    }
    r=1;
    c=k+1;
    j=k*k+1;
    while(r<k+1 && j<n)
    {
        r++;
        j++;
    }
    if(j==n)
        return ;
    while(c>1 && j<n)
    {
        c--;
        j++;
    }
    return ;
}

void odd(int n,int k)
{
    if(k*k==n)
    {
        c=1;
        r=k;
        return ;
    }
    r=k+1;
    c=1;
    j=k*k+1;
    while(c<k+1 && j<n)
    {
        c++;
        j++;
    }
    if(j==n)
        return ;
    while(r>1 && j<n)
    {
        r--;
        j++;
    }
    return ;
}
