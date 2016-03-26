#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N,A,min=1000000,ans;

    scanf("%lld",&N);

    for(int i=1;i<=N;i++)
    {
        scanf("%lld",&A);
        if(min>A)min=A;

    }
   // cout<<min<<endl;
    if(min==1)ans=-1;
    else ans=1;
    cout<<ans<<endl;



    return 0;
}
