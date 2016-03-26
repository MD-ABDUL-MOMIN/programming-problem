#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    long long int F=0;
    for(i=1;i<N;i++)
    {
        F+=(N-i)*i;

    }
    printf("%lld\n",F+N);
    return 0;
}
