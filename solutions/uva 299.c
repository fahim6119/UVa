#include<stdio.h>
int main()
{
    int n,l,i=0,j,a[55],k,count=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        count=0;
        scanf("%d",&l);
        for(j=0;j<l;j++)
            scanf("%d",&a[j]);
        for(j=0;j<l;j++)
        {
            for(k=0;k<l-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
