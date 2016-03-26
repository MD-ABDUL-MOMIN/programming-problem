#include<bits/stdc++.h>

using namespace std;
int y[301];
int main()
{
    long long int x;
    int p,n,i,ans=-1;
    scanf("%d%d",&p,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        ++y[x%p];
        if(y[x%p]>1&&ans==-1)
            ans=i;
    }
    cout<<ans<<endl;

    return 0;
}
