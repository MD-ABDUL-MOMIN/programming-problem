#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)


int main()
{
   long long int n,m,l,ans;
   vector<long long int>V;
   scanf("%lld",&n);
   scanf("%lld",&m);
   for(int i=1;i<=n;i++)
   {
       scanf("%lld",&l);
       V.push_back(l);

   }
   sort(V.rbegin(),V.rend());
   for(int i=0;i<n;i++)
   {
       m=m-V[i];
       if(m<=0){
        ans=i+1;break;
       }
   }
   cout<<ans<<endl;









    return 0;

}
