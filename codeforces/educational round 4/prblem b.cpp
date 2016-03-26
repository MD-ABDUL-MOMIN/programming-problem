#include<bits/stdc++.h>

using namespace std;
long long int c[2000000];
int main()
{
    long long int i, n,s,ans=0;


    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&s);
        c[s]=i;
    }
    for(i=2;i<=n;i++)
    {
        if(c[i]>c[i-1])
        ans+=(c[i]-c[i-1]);
        else ans+=(c[i-1]-c[i]);
    }
    cout<<ans<<endl;

    return 0;
}
