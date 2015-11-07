#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char a[]);
int main()
{
    int i,j,k,l,asc,r;
    char a[1000],b[1000],c[10],rem;
    while(gets(a)!=0)
    {
        l=strlen(a);
        if(a[0]>=48 && a[0]<=57)
        {
            reverse(a);
            j=0;
            for(i=0;i<l;)
            {
                if(a[i]=='1')
                {
                    strncpy(c,a+i,3);
                    c[3]=0;
                    k=atoi(c);
                    b[j++]=k;
                    i=i+3;
                }
                else
                {
                    strncpy(c,a+i,2);
                    c[2]=0;
                    k=atoi(c);
                    b[j++]=k;
                    i=i+2;
                }
            }
            b[j]=0;
            puts(b);
        }

        else
        {
            char c[1000]="";

            for(i=l-1;i>=0;i--)
            {
                asc=a[i];
                j=0;
                while(asc>0)
                {
                    rem=asc%10;
                    asc=asc/10;
                    b[j++]=rem+48;
                }
                b[j]=0;
                strcat(c,b);
            }
            puts(c);
        }
    }
    return 0;
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

