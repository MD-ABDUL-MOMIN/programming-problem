#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i=1,j=1,ans=0,b;
   for(i=1;i<=999;i++)
   {
      for(j=1;j<=999;j++)
      {
          b=i*j;
          long long int tem=b,c=0;
          while(b!=0)
          {
              int k=b%10;
              c=c*10+k;
              b=b/10;
          }
          if(tem==c){if(ans<c)ans=c;cout<<i<<' '<<j<<' '<<ans<<endl;}


      }



   }
   cout<<ans<<endl;
    return 0;
}
