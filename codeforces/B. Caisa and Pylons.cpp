#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,M,ans=0,j=0,energy=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&M);
        if(ans<M)ans=M;

    }
    cout<<ans<<endl;

    return 0;
}
