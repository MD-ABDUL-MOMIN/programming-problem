#include<bits/stdc++.h>

#define ll long long int
#define In(ch,j) ch.insert(j);

using namespace std;

int main()
{
    ll n,m,i;
    vector<long long int>a,ans;
    set<long long int>M;

    scanf("%lld%lld",&n,&m);
    a.push_back(0);
    for(int i=0;i<n;i++)
    {  long long int tem;
        scanf("%lld",&tem);
        a.push_back(tem);
    }
    for(int i=n;i>=1;i--)
    {
        M.insert(a[i]);
        ans.push_back(M.size());


    }
    long long int pos;
    for(int i=0;i<m;i++)
    {
        scanf("%lld",&pos);
        cout<<ans[n-pos]<<endl;

    }

    return 0;


}
