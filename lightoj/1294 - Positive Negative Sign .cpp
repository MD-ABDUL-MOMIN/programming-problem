#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    long long int N,M,ans;
    while(t<=T)
    {
       scanf("%lld%lld",&N,&M);
       ans=((N/(2*M)))*(M*M);
       printf("Case %d: %lld\n",t,ans);
       t++;
    }
    return 0;
}
