#include<stdio.h>
int main()
{
    int n,k,l,i,j,a[105],sum,av,move;
    for(i=1;;i++)
    {
        move=0;
        sum=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        av=sum/j;
        for(j=0;j<n;j++)
            if(a[j]>av)
                move+=a[j]-av;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",i,move);
    }
    return 0;
}
