#include<bits/stdc++.h>

using namespace std;
#define pb push_back
bool Check[1000000002];
int main()
{
   long long int n,m,t,p,q;
    scanf("%lld",&t);
    while(t--)
    {
         scanf("%lld%lld",&n,&m);
         for(int i=2;i<=sqrt(m)+1;i+=2)
        Check[i]=true;
        vector<long long int>prime;
    Check[2]=false;
    Check[1]=true;
    prime.pb(2);

    for(long long int i=3;i<=sqrt(m)+1;i+=2)
    {
        if(Check[i]==false)
        {
           //prime.pb(i);
             // cout<<i<<endl;

            for(long long int j=i*i;j<=m;j+=i)
            {

                Check[j]=true;
            }
        }
    }
    //prime.pb(10000000);
  //for(size_t t=0;t<prime.size();t++)
    //  cout<<prime[t]<<' ';

          // for(long long  j=n;j<=m;j++)
          // {

             //  Check[j]=true;

           //}
   //  }
       for(p=n;p<=m;p++)
        if(Check[p]==false)
        cout<<p<<endl;
         cout<<endl;
         prime.clear();
    }


    return 0;
}
