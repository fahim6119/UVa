#include<stdio.h>
#include<string.h>
void quicksort(int a[],int low,int high);
int partition(int a[],int low, int high);
int main()
{
    int x,t,sum,n,i,a[25];
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quicksort(a,0,n-1);
        for(i=1;i<n;i++)
            sum+=a[i]-a[i-1];
        sum=sum*2;
        printf("%d\n",sum);
    }
    return 0;
}

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot = partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}

int partition(int a[],int low, int high)
{
    int i,j,r,x,temp;
    x=a[high];
    i=low-1;
    for(j=low;j<high;j++)
    {
        if(a[j]<x)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}
