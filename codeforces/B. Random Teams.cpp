#include<bits/stdc++.h>

using namespace std;

long long int nCr(long long int n,long long int m)
{
    int d=min(m,(n-m));
    long long int ans=1;
    for(int i=1;i<=d;i++,n--)
    {
        ans=ans*n/i;
    }
    return ans;
}

int main()
{
    long long int n,m,max=0,min=0;
    scanf("%lld%lld",&n,&m);
    max=(n-m+1)*(n-m)/2;
    min=(m*(n/m-1)+(n%m)*2)*(n/m)/2;
   /* long long int t=m;
     for(int i=1;i<=t;i++)
     {
         int  b=n/m;
         if(n==m){i=t+1;}
         if(n%m==0&&b>1){min+=(nCr(b,2)*(t-i+1));i=t+1;}
          else if(b>1)min+=nCr(b,2);
        // cout<<b<<endl;
         n=n-b;
         --m;
         if(n<2)break;

     }
     */
    cout<<min<<' '<<max<<endl;

    return 0;
}
