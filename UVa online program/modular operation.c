#include<stdio.h>
#define i64 long long
i64 F(i64 N,i64 P,i64 M);
int main()
{i64 m,P,N,d;
while(scanf("%lld%lld%lld",&N,&P,&m)){
     d=F(N,P,m);
printf("%lld\n\n",d);}
return 0;}
long long F(i64 N,i64 P,i64 M)
{
if(P==0) return 1;
if(P%2==0)
{
i64 ret=F(N,P/2,M);
return ((ret%M)*(ret%M))%M;
}
else
return ((N%M)*(F(N,P-1,M)%M))%M;
}
