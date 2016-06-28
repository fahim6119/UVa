#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char a[]);
void int_str(int a,char c[]);
void d_sort(char a[]);
void a_sort(char a[]);
char b[1000][10000],c[100],ori[100],rev[100];
int main()
{
    int x,y,i_ori,i_rev,i,dif,count;
    while(scanf("%d",&x)==1 && x!=0)
    {
        int_str(x,c);
        y=0;
        count=0;
        printf("Original Number was %d\n",x);
        while(y!=1)
        {
            strcpy(ori,c);
            d_sort(ori);
            i_ori=atoi(ori);
            strcpy(rev,c);
            a_sort(rev);
            i_rev=atoi(rev);
            dif=i_ori-i_rev;
            printf("%d - %d = %d\n",i_ori,i_rev,dif);
            int_str(dif,c);
            strcpy(b[count],c);
            for(i=0;i<count;i++)
                if(strcmp(b[i],b[count])==0)
                    y=1;
            count++;
        }
        printf("Chain length %d\n\n",count);
    }
    return 0;
}

void int_str(int a,char c[])
{
    int m,r,j=0;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c[j++]=r+'0';
    }
    c[j]=0;
    reverse(c);
}
void reverse(char r[])
{
    int i,j,l;
    char temp[1001];
    l=strlen(r);
    for(i=l-1,j=0;i+1!=0;i--,j++)
    {
        temp[j]=r[i];
    }
    temp[j]='\0';
    strcpy(r,temp);
}

void d_sort(char a[])
{
    int i,j,MAX;
    char temp;
    MAX=strlen(a);
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

void a_sort(char a[])
{
    int i,j,MAX;
    MAX=strlen(a);
    char temp;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
