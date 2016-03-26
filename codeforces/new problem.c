#include<stdio.h>

int main()
{
    long long int i=0,k,n,sum=0,j=10,l;
    scanf("%lld",&n);
        k=n;
    while(n>0)
    {
      n=n/10;
      ++i;
    }
    while(i>0)
    {
    n=1;
    for(l=1;l<i;l++)
    {
        n*=10;
    }
    n=n-1;
    sum+=(k-n)*(i);
    k=n;
    i--;
    }
    printf("%lld\n",sum);
    return 0;
}
