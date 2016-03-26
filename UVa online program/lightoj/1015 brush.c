#include<stdio.h>
int main()
{ int T;
    while(scanf("%d",&T)==1)
    {//printf("\n");
        int j=1,N,i;
        while(j<=T)
        {printf("\n\n");
        int A[1005];long long int sum=0;
            scanf("%d",&N);
            for(i=0;i<N;i++)
                scanf("%d",&A[i]);
            for(i=0;i<N;i++)
            {
                if(A[i]<0)
                    continue;
                else sum+=A[i];
            }
            printf("Case %d:%lld",j,sum);
            //if(j!=T)printf("\n");
            j++;
        }
    }
    return 0;
}
