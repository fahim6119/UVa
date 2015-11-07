#include<stdio.h>
#include<string.h>
char c[2001][76];
int main()
{
    int n,u,k,j,i,count[2001]={0},d[2001],temp,MAX;
    char a[2001][76],b[2001][76],tempc[76];;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(b[i]);
        k=0;
        for(j=0;b[i][j]!=0;j++)
        {
            if(j==0 && b[i][j]==' ');
            else if (b[i][j]==' ' && b[i][j-1]>47 )
                break;
            else if(b[i][j]!=' ')
            {
                a[i][k++]=b[i][j];
            }
        }
        a[i][k]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]!=0)
        {
            count[i]=1;
            for(j=i+1;j<n;j++)
                if(strcmp(a[i],a[j])==0)
                {
                    count[i]++;
                    a[j][0]=0;
                }
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(count[i]>0)
        {
            strcpy(c[j],a[i]);
            d[j]=count[i];
            j++;
        }
    }
    MAX=j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX-1;j++)
            if(strcmp(c[j],c[j+1])>0)
            {
                strcpy(tempc,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],tempc);
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
    }
    for(i=0;i<MAX;i++)
        printf("%s %d\n",c[i],d[i]);
    return 0;
}

