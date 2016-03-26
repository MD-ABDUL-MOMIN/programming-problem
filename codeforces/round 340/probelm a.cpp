#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,ans;
    scanf("%lld",&n);
    ans=n/5;
    if(n%5!=0)++ans;
    cout<<ans<<endl;

    return 0;
}
