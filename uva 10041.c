#include<stdio.h>
#include<math.h>
void quicksort(int a[],int low,int high);
int partition(int a[],int low, int high);
int main()
{
    int x,t,sum,m,n,i,a[501]={0};
    scanf("%d",&t);
    while(t--)
    {
        sum=0,m=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quicksort(a,0,n-1);
        if(n%2==0)
            m=a[n/2-1];
        else
            m=a[(n-1)/2];
        for(i=0;i<n;i++)
        {
            if(m>a[i])
                sum+=m-a[i];
            else
                sum+=fabs(a[i]-m);
        }
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
    int i,j,x,temp;
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
