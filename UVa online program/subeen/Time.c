#include<stdio.h>
#include<math.h>
int main()
{   int T,i=1,d;
    long long int S;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%lld",&S);
        long long int sum=0;
        printf("Case %d: ",i);
        if(S>=31104000)
        {
            d=S/31104000;
            S=S%31104000;
        if(d==1)printf("%d year ",d);
        else if(d>1)printf("%d years ",d);
        }
        if(S>=2592000)
        {
            d=S/2592000;
            S=S%2592000;
             if(d==1)printf("%d month ",d);
        else if(d>1)printf("%d months ",d);
        }
        if(S>=86400)
        {d=S/86400;
            S=S%86400;
             if(d==1)printf("%d day ",d);
        else if(d>1)printf("%d days ",d);

        }
        if(S>=3600)
        {d=S/3600;
            S=S%3600;
             if(d==1)printf("%d hour ",d);
        else if(d>1)printf("%d hours ",d);

        }
        if(S>=60)
        {d=S/60;
        S=S%60;
        if(d==1)printf("%d minute ",d);
        else if(d>1)printf("%d minutes ",d);        }
        if(S==1)printf("%d second",S);
        else if(S>1)printf("%d seconds",S);
        printf("\n");
        i++;


    }
    return 0;
}
