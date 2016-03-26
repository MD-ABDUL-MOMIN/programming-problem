#include<stdio.h>
#include<math.h>
int main()
{
    double p,n;
    long long int k;
    while(scanf("%lf%lf",&n,&p)==2)
    {
        k=round(pow(p,1.0/n));
        printf("%lld\n",k);
    }
    return 0;
}
