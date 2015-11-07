#include<stdio.h>
int main()
{
    int a[6],i,t,j,temp;
    scanf("%d",&t);
    while(t--)
    {
        for(i=1;i<5;i++)
            scanf("%d",&a[i]);
        for(i=1;i<4;i++)
        {
            for(j=1;j<4;j++)
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        }
        if(a[1]==a[2] && a[2]==a[3] && a[3]==a[4])
            printf("square\n");
        else if (a[1]==a[2] && a[3]==a[4])
            printf("rectangle\n");
        else if(a[1]<a[2]+a[3]+a[4])
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
