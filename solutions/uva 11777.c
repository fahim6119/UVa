#include<stdio.h>
#define MAX 3
void sort(int a[]);
int main()
{
    int test,i,k,t1,t,t2,f,a,c[4];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d %d %d",&t1,&t2,&f,&a);
        for(i=0;i<MAX;i++)
            scanf("%d",&c[i]);
        sort(c);
        float d= (c[0]+c[1])/2;
        float sum= t1+t2+f+a+d ;
        if(sum>=90)
            printf("Case %d: A\n",k);
        else if(sum>=80 && sum<90)
            printf("Case %d: B\n",k);
        else if(sum>=70 && sum<80)
            printf("Case %d: C\n",k);
        else if(sum>=60 && sum<70)
            printf("Case %d: D\n",k);
        else if(sum<60)
            printf("Case %d: F\n",k);
    }
    return 0;
}

void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX-1;j++)
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
