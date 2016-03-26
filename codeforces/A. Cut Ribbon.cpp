#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{
    int n,a,b,c,ans=0,mini,y;

    scanf("%d%d%d%d",&n,&a,&b,&c);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
           y=n-i*a-j*b;
            if(y%c==0&&y>=0)
            ans=max(ans,i+j+(y/c));
        }


    }

    cout<<ans<<endl;

    return 0;

}
