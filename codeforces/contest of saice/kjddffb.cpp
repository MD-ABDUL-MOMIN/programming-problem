#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int m,n,tem,max=0,ans,p,q;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        if(m==0&&n==0)break;
        if(m<n)p=m,q=n;
        else p=n,q=m;
        max=0;

        for(long long int i=p;i<=q;i++)
    {
        tem=i;

        long long int n=0;
          do
          {
          if(tem%2==0)tem=tem/2;
          else tem=tem*3+1;
          ++n;

          }
          while(tem!=1);
          if(max<n){max=n;ans=i;}
        }
        cout<<"Between "<<p<<" and "<<q<<", "<<ans<<" generates the longest sequence of "<<max<<" values."<<endl;
        max=0;
    }
            return 0;
    }
