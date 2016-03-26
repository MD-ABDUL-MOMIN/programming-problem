#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,n,ans;
    scanf("%d%d%d",&n,&a,&b);

    ans=min(n-a,b+1);
    cout<<ans<<endl;
    return 0;

}
