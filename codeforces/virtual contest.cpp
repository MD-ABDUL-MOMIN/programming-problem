#include<bits/stdc++.h>

using namespace std;
long long int ans=0,p=0;
long long int gcd(long long int a,long long int b)
{

   if(a<b)swap(a,b);
  if(a%b==0){
    ans+=a/b;
    return ans;
  }
  else if(a==b){++ans;return ans;}
  else {ans+=a/b;}

   gcd(b,a%b);

}

int main()
{
   long long int a,b;
 scanf("%lld%lld",&a,&b);
 ans=gcd(a,b);

 cout<<ans<<endl;

    return 0;
}
