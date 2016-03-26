#include<stdio.h>

int main()
{
    int N,H,W,i,j;
    long long int B,p[30],w[30][30],q,P;
    while(scanf("%d%lld%d%d",&N,&B,&H,&W)==4)
    { q=500001;


        for(i=0;i<H;i++)
        {  int max=1001;
            scanf("%lld",&p[i]);
            for(j=0;j<W;j++)
                {scanf("%lld",&w[i][j]);
                if(max>=w[i][j]&&w[i][j]>=N)
                    max=w[i][j];
                }
                printf("max %d\n",max);
                P=(max*p[i]);
                 printf("The P %lld\n",P);
            if(q>=P)q=P;
            printf("The q %lld\n",q);
        }
        if(q>B)printf("stay home\n");
        else printf("%lld\n",q);

    }
    return 0;
}
