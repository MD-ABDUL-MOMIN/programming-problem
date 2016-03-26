#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,mark[1002]={0},m;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m);
        ++mark[m];
        if(max<mark[m])max=mark[m];
    }
    int ans=0;
    for(int i=1;i<=1000;i++)
        if(mark[i]>0)
        ++ans;
    cout<<max<<' '<<ans<<endl;

    return 0;
}
