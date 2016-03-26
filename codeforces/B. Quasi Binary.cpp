#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int>ans;
    vector<int>num;
    long long int n,m,p,dig=0;
    scanf("%lld",&n);
    m=n;
    while(m>0)
    {
        ++dig;
        int rem=m%10;
        num.push_back(rem);
        m=m/10;
    }
    reverse(num.begin(),num.end());


        while(n!=0){
                p=0;
      for(size_t j=0;j<num.size();j++)
      {
         if(num[j]>=1)
         {
             p=p*10+1;
             num[j]=num[j]-1;
         }
         else {
              p=p*10+0;
         }
      }
      n=n-p;
      ans.push_back(p);
        }
        cout<<ans.size()<<endl;
        for(size_t j=0;j<ans.size();j++)
            printf("%lld ",ans[j]);

        return 0;

}
