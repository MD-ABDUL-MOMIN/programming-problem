#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int g,r,b,l,l1,ans;
    scanf("%lld%lld%lld",&g,&r,&b);
    l=min(min(g,r),b);

   ans=l+((b-l)/3+(g-l)/3+(r-l)/3);
   ((b-l)%3+(g-l)%3+(r-l)%3)==4&&l!=0?++ans:ans;

   cout<<ans<<endl;

   return 0;

}
