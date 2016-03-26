#include<stdio.h>
int main()
{
    int T;
    while(scanf("%d",&T)==1)
    {
        int i=1,N,A[300],j;
        while(i<=T)
        {int great=0;
            scanf("%d",&N);
            for(j=0;j<N;j++){scanf("%d",&A[j]);
            if(great<A[j])great=A[j];
        }
        printf("Case %d: %d\n",i,great);
        i++;
    }
}
return 0;
}
