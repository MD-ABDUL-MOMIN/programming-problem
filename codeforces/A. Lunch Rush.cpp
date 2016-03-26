#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,d,k,ans=0,p,E;
    scanf("%lld%lld",&n,&k);
    for(int i=1;i<=n;i++)
    {
        p=0;
        scanf("%lld%lld",&d,&E);
        if(E>k)
            p=d-(E-k);
        else p=d;
        if(i==1)ans=p;
        ans<p?ans=p:ans;

    }
    cout<<ans<<endl;

    return 0;
}
