#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int N[6],i,j,ans=0;
    for(i=0;i<4;i++)
        scanf("%lld",&N[i]);
       sort(N,N+4);
    for(i=0;i<4;i++)
        {
        if(N[i]==N[i+1])
            ++ans;
    }
    cout<<ans<<endl;

    return 0;
}
