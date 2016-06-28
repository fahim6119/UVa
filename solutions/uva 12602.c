#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,i,j,k,a[100];
    char z[100],b[10];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(z);
        for(i=0;i<3;i++)
            a[i]=z[i]-'A';
        k=a[0]*26*26+a[1]*26+a[2];
        b[0]=z[4];
        b[1]=z[5];
        b[2]=z[6];
        b[3]=z[7];
        b[4]=0;
        j=atoi(b);
        i=fabs(j-k);
        if(i<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
