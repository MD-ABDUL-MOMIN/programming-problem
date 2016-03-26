#include<bits/stdc++.h>

using namespace std;
long long int C[200003];
int main()
{
    long long int n,m,i,j,l,ans=0;
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&l);
        ++C[l];
    }
    for(i=1;i<=10;i++)
    {
        if(C[i]>0)
            ans+=((C[i]*(C[i]-1))/2);
    }
    cout<<(n*(n-1))/2-ans<<endl;

    return 0;
}
