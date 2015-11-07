#include<stdio.h>
int sort(int a[]);
int main()
{
    int n,x,a[12],i,up,down,j,t,l;
    printf("Lumberjacks:\n");
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        int count=0;
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        up=a[0];
        down=a[1];
        if(up>down)
        {
            for(i=0;i<9;i++)
                if(a[i]>a[i+1])
                    count++;
        }
        else if(up<down)
        {
            for(i=0;i<9;i++)
                if(a[i]<a[i+1])
                    count++;
        }
        if (count==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
