#include<bits/stdc++.h>

using namespace std;
map<long long int,int>check;
int main()
{
    long long int n,N,ans;
    vector<long long int>a;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&N);
        a.push_back(N);
        check[N]=1;

    }
    long long int c;
    sort(a.begin(),a.end());
    for(size_t t=a.size()-1;t>=0;t--)
    {
        if(a[t]%2==0)
            c=a[t]/2+1;
        else c=(a[t]+1)/2;
        if(check[c]==1)
        {
            ans=a[t]%c;
            break;
        }


    }

    cout<<ans<<endl;

    return 0;
}
