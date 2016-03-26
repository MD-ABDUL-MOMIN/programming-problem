#include<stdio.h>
int main()
{
    long long int N,i,j,M,a,ans=0;
    scanf("%I64d%I64d%I64d",&N,&M,&a);
    while(N<a&&M<a)
    {
        if(N<=0&&M<=0){ans=-1;break;}
        if(N<0&&M>0)
        {
            ans+=(-N/M)+1;
            N+=(ans*M);
        }
        if(M<0&&N>0)
        {
            ans+=(-M/N)+1;
            M+=(ans*N);
        }
        if(N<M)N=N+M;
        else M=M+N;
        ans++;
    }
    printf("%I64d\n",ans);
    return 0;
}
