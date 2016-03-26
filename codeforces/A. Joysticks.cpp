#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,ans=0;
 scanf("%d%d",&a,&b);
 if(a>b)swap(a,b);
 while(a+1<=b-2)
 {
     a=a+1;
     b=b-2;
     ++ans;
 }
  ans+=(a+b-2);
  //cout<<a<<b<<endl;
  if(a==b&&a!=1)--ans;
  cout<<ans<<endl;

  return 0;
}
