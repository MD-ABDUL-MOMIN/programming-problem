#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,ans=0,a,p,min,tem;
    scanf("%d",&n);
    tem=n;
    while(n-->0)
    {
        scanf("%d%d",&a,&p);
        if(n==tem-1){min=p;}
        if(min>p)
            min=p;
        ans+=min*a;
    }
    cout<<ans<<endl;
    return 0;
}
