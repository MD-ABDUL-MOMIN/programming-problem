#include<bits/stdc++.h>

using namespace std;

#define sn(n,t) scanf("%lld%lld",&n,&t)

int main()
{
    long long int n,t,mid,ans;
    sn(n,t);
    if(n%2==1)++n;
    mid=n/2;
    if(t<=mid)ans=2*t-1;
    else ans=(t-mid)*2;

    cout<<ans<<endl;

    return 0;

}
