#include<stdio.h>

int main()
{
    int N,A[50],i,j,k,sum=0,key;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    for(i=1;i<N;i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0&&key<A[j])
        {
            A[j+1]=A[j];
            j=j-1;
           A[j+1]=key;
        }

    }
    //for(i=0;i<N;i++)printf("%d",A[i]);
    for(i=0;i<N/2;i++)
    {
        M=A[i]+A[N-i-1];
        if(M)
    }
    return 0;
}
