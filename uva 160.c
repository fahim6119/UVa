#include<stdio.h>
int prime[101],status[1001]={0};
void prime_list();
void sieve();
int main()
{
    int i,j,n,m,max,flag;
    sieve();
    prime_list();
    while(scanf("%d",&n)==1)
    {
        int count[1000]={0};
        if(n==0)
            break;
        else if (n==1)
        {
            printf("%3d! =%3d\n",n,0);
            continue;
        }

        m=1;
        max=0;
        for(i=2;i<=n;i++)
        {
            m=i,j=0;
            while(m>1)
            {
                if(m%prime[j]==0)
                {
                    count[j]++;
                    m=m/prime[j];
                    if(j>max)
                        max=j;
                }
				else
					j++;
            }
         }
        for (i = 24; i >= 0; i--)
            if (count [i] != 0)
                break;
        j = i;
        printf("%3d! =",n);
        if (j >= 15)
            flag = 0;
        else
            flag = 15;
        for (i = 0; i <= j; i++)
        {
            printf("%3d", count [i]);
            flag++;
            if (flag == 15)
                printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}

void sieve()
{
    int i,j;
    status[0]=status[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(status[i]==0)
            for(j=i+i;j<=1000;j=j+i)
                status[j]=1;
    }
}

void prime_list()
{
    int i,j=0,prime_end;
    for(i=2;i<=100;i++)
        if(status[i]==0)
            prime[j++]=i;
    prime_end =j;
}
