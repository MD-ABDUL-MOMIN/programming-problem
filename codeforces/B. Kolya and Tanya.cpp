#include<bits/stdc++.h>

using namespace std;
#define MOD 1000000007
int main()
{
   long long int n,a=1,b=1,ans;
   scanf("%lld",&n);
   while(n--)
   {
       a=(a*27)%MOD;
       b=(b*7)%MOD;
   }
   ans=(a-b+MOD)%MOD;

   cout<<ans<<endl;
   return 0;
}
