#include<stdio.h>
#include<string.h>
void reverse(char a[]);
void mirror(char c[]);
char j[50];
int main()
{
    int p,m;
    char a[50],b[50],c[50];
    while(gets(j)!=0)
    {
        p=0,m=0;
        strcpy(a,j);
        strcpy(b,a);
        reverse(b);
        if(strcmp(a,b)==0)
            p=1;
        strcpy(c,a);
        mirror(c);
        if(strcmp(a,c)==0)
            m=1;
        if(p==0 && m==0)
            printf("%s -- is not a palindrome.\n",a);
        else if(p==1 && m==0)
            printf("%s -- is a regular palindrome.\n",a);
        else if(p==0 && m==1)
            printf("%s -- is a mirrored string.\n",a);
        else if(p==1 && m==1)
            printf("%s -- is a mirrored palindrome.\n",a);
        printf("\n");
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

void mirror(char c[])
{
    int i,j,l;
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]=='E')
            c[i]='3';
        else if(c[i]=='A')
            c[i]='A';
        else if(c[i]=='H')
            c[i]='H';
        else if(c[i]=='I')
            c[i]='I';
        else if(c[i]=='M')
            c[i]='M';
        else if(c[i]=='O')
            c[i]='O';
        else if(c[i]=='T')
            c[i]='T';
        else if(c[i]=='U')
            c[i]='U';
        else if(c[i]=='V')
            c[i]='V';
        else if(c[i]=='W')
            c[i]='W';
        else if(c[i]=='X')
            c[i]='X';
        else if(c[i]=='Y')
            c[i]='Y';
        else if(c[i]=='1')
            c[i]='1';
        else if(c[i]=='8')
            c[i]='8';
        else if(c[i]=='J')
            c[i]='L';
        else if(c[i]=='L')
            c[i]='J';
        else if(c[i]=='S')
            c[i]='2';
        else if(c[i]=='Z')
            c[i]='5';
        else if(c[i]=='2')
            c[i]='S';
        else if(c[i]=='3')
            c[i]='E';
        else if(c[i]=='5')
            c[i]='Z';
        else if(c[i]=='0')
            c[i]='O';
        else
            c[i]=',';
    }
    reverse(c);
}
