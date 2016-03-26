#include<stdio.h>
int main()
{
    long long int n,m,a,P=1,Q=1,i;
    double F;
    scanf("%lld%lld%lld",&n,&m,&a);
     if(n%a==0)P=n/a;
     else P=(n/a)+1;
     if(m%a==0)Q=m/a;
     else Q=(m/a)+1;
    F=P*Q;
    printf("%.0lf",F);
    return 0;
}
