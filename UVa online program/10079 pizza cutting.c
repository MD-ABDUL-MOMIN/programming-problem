#include<stdio.h>
int main()
{
    long long int N,M;
    while(scanf("%lld",&N)==1&&N>=0)
    {
    M=((N*(N+1))/2)+1;
        printf("%lld\n",M);
        }
    return 0;
}
