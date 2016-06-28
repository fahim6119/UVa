#include<stdio.h>
void sort(int a[],int low, int high);
int partition(int a[], int low, int high);
int binary_search(int a[], int low, int high,int target,int exception);
int main()
{
    int i,j,n,d,m,min,up,down,p;
    while(scanf("%d",&n)==1)
    {
        int a[10001]={0};
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        sort(a,0,n-1);
        min=1000001,up=0,down=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=m)
            {
                p=m-a[i];
                int k = binary_search(a,0,n-1,p,i);
                if (k>i)
                {
                    d=a[k]-a[i];
                    if(d<min)
                    {
                        min=d;
                        up=a[k];
                        down=a[i];
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",down,up);
    }
    return 0;
}
void sort(int a[],int low, int high)
{
    if(low<high)
    {
        int q = partition(a,low,high);
        sort(a,low,q-1);
        sort(a,q+1,high);
    }
}

int partition(int a[], int low, int high)
{
    int i,j,k,x,temp;
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

int binary_search(int a[],int low,int high,int target,int exception)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(mid==exception && a[mid]==target && a[mid+1]==target)
            return mid+1;
        else if(a[mid]==target)
            return mid;
        else if(a[mid]<target)
            low=mid+1;
        else if(a[mid]>target)
            high=mid-1;
    }
    return -1;
}
