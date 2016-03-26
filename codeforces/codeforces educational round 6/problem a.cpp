#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,D,E,ans;
    scanf("%lld%lld",&a,&b);
    scanf("%lld%lld",&c,&d);
   D=c-a;
   E=d-b;

    if(D<0)D=d*-1;
    if(E<0)E=E*-1;
    ans=min(D,E);
    ans+=(max(D,E)-ans);
    cout<<ans<<endl;
    return 0;

}
