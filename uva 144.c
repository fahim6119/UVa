#include<stdio.h>
int main()
{
    int s[26],n,p,k,i,j,r;
    while(scanf("%d %d",&n,&k)==2)
    {
        if(n==0 && k==0)
            break;
        for(i=0;i<=26;i++)
            s[i]=0;
        p=0,r=0;
        i=1,j=1;
        while(p!=n)
        {
            if(s[i]<40)
            {
                if(r!=0)
                {
                    if(40-s[i]>=r)
                    {
                        s[i]+=r;
                        r=0;
                    }
                    else
                    {
                        r=r-40+s[i];
                        s[i]=40;
                    }
                }
                else if((40-s[i])>=j)
                {
                        s[i]+=j;
                }
                else if (40-s[i]<j)
                {
                    r=j-40+s[i];
                    s[i]=40;
                }
                if(s[i]>=40)
                {
                    p++;
                    printf("%3d",i);
                }
                if(j==k)
                    j=0;
                if(r==0)
                    j++;
            }
            if(i==n)
                i=0;
            i++;
        }
        printf("\n");
    }
    return 0;
}
