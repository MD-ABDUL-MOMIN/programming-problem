#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,N[3]={0},M,ans=0,p;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&M);
        ++N[M];
    }
    if(N[1]<a)p=a-N[1];
    else {
        ans=N[1]-a;
        p=0;
    }
    if((N[2])>=(b+p))
    {
        ans+=N[2]-p-b;
    }
    cout<<ans<<endl;

    return 0;

}
