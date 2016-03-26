#include<stdio.h>
long long int rev(long long int N);
int main()
{
    int i,n,j;
    long long int a,b;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%lld",&a);
        i=0;
        while(a!=rev(a))
        {
            a=a+rev(a);
            i++;
        }
        printf("%d %lld\n",i,a);
    }
    return 0;
}
long long int rev(long long int N)
{
    long long int rem,sum=0;
    while(N!=0)
    {
        rem=N%10;
        N=N/10;
        sum=sum*10+rem;
    }
    return (sum);
}
