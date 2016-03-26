#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

   long long int n,i,j,ans=1,c=1;
   scanf("%lld",&n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans*=i;
            while(n%i==0)
            {
                n=n/i;
            }
        }
    }
    ans*=n;
   cout<<ans<<endl;
    return 0;
}
