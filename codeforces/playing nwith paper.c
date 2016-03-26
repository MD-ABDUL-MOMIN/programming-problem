#include<stdio.h>
long long int gcd(long long int n,long long int m);
long long int sum=0;
int main()
{
   long long int a,b,d;
    scanf("%lld%lld",&a,&b);
    d=gcd(a,b);
    printf("%lld\n",d);
    return 0;

}
long long int gcd(long long int n,long long int m)
{
    if(m==0)return sum;
     sum=sum+(n/m);

    return gcd(m,n%m);
}
