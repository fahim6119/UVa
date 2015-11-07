#include<stdio.h>
int main()
{
    int n,i,p,a[3];
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])==3)
    {
        int flag[3]={0};
        for(i=0;i<3;i++)
            flag[a[i]]++;
        p=4;
        for(i=0;i<3;i++)
            if (flag[a[i]]==1)
                p=i;
        if(p==4)
            printf("*\n");
        else if(p==0)
            printf("A\n");
        else if(p==1)
            printf("B\n");
        else if(p==2)
            printf("C\n");
    }
    return 0;
}
