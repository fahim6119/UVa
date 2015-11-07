#include<stdio.h>
int main()
{
    int count=0;
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(ch==34)
        {
            count++;
            if(count%2==1)
                printf("``");
            else if (count%2==0)
                printf("''");
        }
        else
            printf("%c",ch);
    }
    return 0;
}
