#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int A[3000002];
int main()
{
    long long int n,i,j,sum=0,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&A[i]);
        sum+=A[i];
    }
    ans+=sum;
    sort(A,A+n+1);

     ans=0;
    for(i=1;i<=n;i++)
    {
        ans+=(A[i]*min(i+1,n));
    }

   /* i=1;
    while(n-->1)
    {
        ans+=sum;
        sum=sum-A[i];
        ++i;
    }
   // cout<<sum+A[i-1]<<endl;
*/
cout<<ans<<endl;

    return 0;


}
