#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char stack[150],c,s[150];
    int t,i,top;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        int len=strlen(s);
        for(i=0,top=0;i<len;i++)
        {
            if(top==0)
                stack[top++]=s[i];
            else if((stack[top-1]=='['&&s[i]==']')||(stack[top-1]=='('&&s[i]==')'))
                top--;
            else if(s[i]=='('||s[i]=='[')
                stack[top++]=s[i];
            else
                break;
        }
        if(top==0 && i==len)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
