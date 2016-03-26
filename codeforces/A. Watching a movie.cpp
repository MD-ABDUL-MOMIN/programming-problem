#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,t,i,j,l,r,ans=0,p=1;
    scanf("%lld%lld",&n,&t);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&l,&r);
        while((p+t)<=l)
        {
            p+=t;
        }
        ans+=(r-p+1);
        cout<<ans<<endl;
        p=r+1;


    }
    cout<<ans<<endl;
    return 0;
}
