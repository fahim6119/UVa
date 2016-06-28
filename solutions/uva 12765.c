#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int m,n,x,y,b,i,j;
    long long cn[15],cm[15],f;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        f=0;
        memset(cm,0,sizeof(cm));
        memset(cn,0,sizeof(cn));
        for(i=0;i<n;i++) // kon number koybar asche count korsi
        {
            scanf("%d",&x);
            cn[x]++;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&y);
            cm[y]++;
        }
        for(i=8;i>1;i--) // kon number koyta thakbe seta calculate korsi
        {
            cm[i]+=cm[i+1];
            cn[i]+=cn[i+1];
        }
        cm[2]+=cm[8];
        cm[4]+=cm[8];
        cm[8]=0;
        cm[2]+=2*cm[4];
        cm[4]=0;
        cm[3]+=cm[6];
        cm[2]+=cm[6];
        cm[6]=0;
        cm[3]+=2*cm[9];
        cm[9]=0;
        cm[0]=0;
        cm[1]=0;
        cn[2]+=cn[8];
        cn[4]+=cn[8];
        cn[8]=0;
        cn[2]+=2*cn[4];
        cn[4]=0;
        cn[3]+=cn[6];
        cn[2]+=cn[6];
        cn[6]=0;
        cn[3]+=2*cn[9];
        cn[9]=0;
        cn[0]=0;
        cn[1]=0;
        for(i=0;i<10;i++) // koyta te equal
        {
            if(cm[i]==cn[i])
            {
                f++;
            }
        }
        if(f==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;

}
