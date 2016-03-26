#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,s,N[102],t,sum=0,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&N[i]);
        sum+=N[i];
    }
    scanf("%d%d",&s,&t);
    int d=min(s,t);
    int e=max(s,t);
    for(int i=d;i<e;i++)
    ans+=N[i];
    if(ans<(sum-ans))
        cout<<ans<<endl;
    else cout<<sum-ans<<endl;

    return 0;

}
