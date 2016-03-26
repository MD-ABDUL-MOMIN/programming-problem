#include<stdio.h>
unsigned H(long long int N,long long int i);
int main()
{
    int T;
    long long int N;
    scanf("%d",&T);
    while(T-->0)
    {
        double F=0;
        scanf("%lld",&N);
        long long int i=1;
        F=H(N,i);
        printf("%lf\n",F);
    }
return 0;
}
double sum=0,temp;
unsigned  H(long long int N,long long int i)
{
    if(i<=N)
    {
        sum+=N/i;
        return H(N,i+1);
    }
    else {temp=sum;sum=0;
            return temp;}
}
