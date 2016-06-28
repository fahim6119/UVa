#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i;
    while(gets(a))
    {
         int x=strlen(a);
         for(i=0;i<x;i++)
         {
            if(a[i]=='A'||a[i]=='B'||a[i]=='C')
                printf("%d",2);
            else if(a[i]=='D'||a[i]=='E'||a[i]=='F')
                printf("%d",3);
            else if(a[i]=='G'||a[i]=='H'||a[i]=='I')
                printf("%d",4);
            else if(a[i]=='J'||a[i]=='K'||a[i]=='L')
                printf("%d",5);
            else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
                printf("%d",6);
            else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
                printf("%d",7);
            else if(a[i]=='T'||a[i]=='U'||a[i]=='V')
                printf("%d",8);
            else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
                printf("%d",9);
            else
                printf("%c",a[i]);
         }
         printf("\n");
    }
    return 0;
}
