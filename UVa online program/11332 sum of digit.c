#include<stdio.h>
long long int F(long long int n);
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        int r;
        r=F(n);
        printf("%d\n",r);
    }
    return 0;
}
long long int F(long long int n)
{int rem,sum=0,d=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        d++;
    }
    n=sum;
    if(d!=1)
    return F(n);
    else return n;
}

