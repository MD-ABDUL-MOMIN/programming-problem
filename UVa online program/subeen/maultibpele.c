#include<stdio.h>
int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    { long long int x,n,k,j;
        scanf("%lld%lld",&x,&n);
        j=n/x;

        for(k=1;k<=j;k++)
           {if(k==1)printf("Case %d: %lld",i,(x*k));
            else printf(" %lld",(x*k));
           }
            printf("\n");
        i++;
    }
    return 0;
}
