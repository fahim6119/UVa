#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c,i,j,d,x,n,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %d",i,n);
        count=0;
        for(j=2;j<sqrt(n)+1;j++)
        {
            if(n%j==0)
            {
                a=n/j;
                printf(" = %d * %d",j,a);
                count++;
            }
            if(count==2)
                break;
        }
        printf("\n");
    }
    return 0;
}
