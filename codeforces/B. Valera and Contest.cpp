#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,l,r;
    vector<long long int>ans;
    long long int Sk,Sa;
    scanf("%lld%lld%lld%lld%lld%lld",&n,&k,&l,&r,&Sa,&Sk);
    int a=Sk/k;

  int b=Sk%k;

    for(int i=1;i<=k;i++)
    {
       if(i<=b){
              if(a+1>r) ans.push_back(r);

         else if(a+1<l) ans.push_back(l);
         else  ans.push_back(a+1);
       }
        else { if(a<l)a=l;
             if(a>r)a=r;
                ans.push_back(a);
        }

    }


     int p=n-k;
     if(n==k)p=1;
     else p=n-k;
      int Set=(Sa-Sk)/p;
      int S=(Sa-Sk)%p;
    int L=1;

    for(int i=1;i<=(n-k);i++)
    {
        if(L<=S){
           if(Set+1>r) ans.push_back(r);

         else if(Set+1<l) ans.push_back(l);
         else  ans.push_back(Set+1);
        }
        else { if(Set<l)a=l;
             if(Set>r)a=r;
                ans.push_back(Set);
        }
          ++L;
    }

for(int i=0;i<n;i++)
    cout<<ans[i]<<' ';


    return 0;


}
