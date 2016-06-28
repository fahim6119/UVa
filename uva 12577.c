#include<stdio.h>
int main()
{
    int i;
    char a[100],h[100]="Hajj",u[100]="Umrah";
    for(i=1;;i++)
    {
        scanf("%s",a);
        if(a[0]=='*')
            break;
        else if (strcmp(a,h)==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if (strcmp(a,u)==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
