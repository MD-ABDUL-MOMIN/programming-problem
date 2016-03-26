#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,t,c,i,m,k=0,ans=0;
    vector<long long int>nam;
    scanf("%lld%lld%lld",&n,&t,&c);
    nam.push_back(0);

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
       nam.push_back(m);

    }
        k=0;
    for(i=n;i>=1;i--)
    {
         if(nam[i]<=t)
         {
             ++k;
         }
         else {
           // nam[i-1]=k;
           if((k-c+1)>0)
            ans+=(k-c+1);
            k=0;
         }

    }
    if((k-c+1)>0)ans+=(k-c+1);

    cout<<ans<<endl;

    return 0;
}
