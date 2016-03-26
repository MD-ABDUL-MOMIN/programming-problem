#include<stdio.h>
//#define M 200000
long long int f91(long long int N);
int main()
{ long long int i=0,j,sum,n;

    while(scanf("%lld",&n)==1&&n!=0)
       {
            sum=f91(n);
            printf("f91%c%lld%c = %lld\n",'(',n,')',sum);
        }
        return 0;
}
long long int f91(long long int N)
{
    if(N<=100)
        return f91(f91(N+11));
    else return (N-10);
}
