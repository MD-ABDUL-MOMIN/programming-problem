#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c,m,p,M,ans=0;
    scanf("%d%d",&n,&c);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(i!=1&&p>=(m+c))
        {
           M=p-m-c;
           if(ans<M)ans=M;
        }
        p=m;

    }
    cout<<ans<<endl;


    return 0;
}
