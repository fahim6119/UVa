#include<stdio.h>
#include<string.h>
char s[1000001],t[1000001];
int main()
{
    long long int lt,ls,count,i,j;
    while(scanf("%s %s",s,t)==2)
    {
        lt=strlen(t);
        ls=strlen(s);
        j=0,count=0;
        for(i=0;i<ls;i++)
        {
            for(;j<lt;j++)
            {
                if(t[j]==s[i])
                {
                    count++;
                    j++;
                    break;
                }
            }
        }
        if(count==ls)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
