#include<stdio.h>
int main()
{
    long long int d;
    scanf("%lld",&d);
    if(d%2==0)d=d/2;
    else d=(-1*(d/2+1));
   printf("%lld",d);
return 0;
}
