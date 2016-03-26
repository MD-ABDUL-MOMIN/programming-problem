#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int Main[2001]={0},min=2001,n,t,max=0,N[2005],ans=0;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&N[i]);

    }
    sort(N,N+n);
    for(int i=((n-1)%t);i<n;i+=t)
    {
        ans+=(N[i]-1);
    }
cout<<ans*2<<endl;

return 0;
}

