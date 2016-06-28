#include<stdio.h>
#include<math.h>
int prime[2000],status[1000001]={0};
void sieve();
int prime_list();
int is_prime(long long int x);
int main()
{
    int i,j,k,count=0,a,b,p[10002]={0};
    long long int x;
    double pr;
    sieve();
    k=prime_list();
    for(i=0;i<=9999;i++)
    {
        x=i*i+i+41;
        if(x<=1000000)
        {
            if(status[x]==0)
                count++;
        }
        else if(x>1000000)
        {
            if(is_prime(x)==1)
                count++;
        }
        p[i]=count;
    }
    p[i]=count;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0)
            pr=((p[b]*100.0)/(b-a+1));
        else
            pr=(((p[b]-p[a-1])*100.0)/(double)(b-a+1));
        printf("%.2lf\n",pr+1e-9);
    }
    return 0;
}

int is_prime(long long int x)
{
    int k;
    for(k=0;prime[k]<=sqrt(x);k++)
    {
        if (x%prime[k]==0)
            return 0;
    }
    return 1;
}

void sieve()
{
    int i,j;
    status[0]=status[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=1000000;j=j+i)
                status[j]=1;
    }
}

int prime_list()
{
    int i,j=0,prime_end;
    for(i=2;i<=20000;i++)
        if(status[i]==0)
        {
            prime[j]=i;
            j++;
        }
    prime_end =j;
    return j;
}
