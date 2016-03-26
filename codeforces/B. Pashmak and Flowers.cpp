#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int max=1,n,min=1,i,j,k,A[200002];
     scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&A[i]);
    sort(A,A+n);
    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
            ++min;
        else break;
    }
    for(i=n-1;i>=1;i--)
    {
        if(A[i]==A[i-1])
            ++max;
        else break;
    }
    long long int ans;
    if(A[0]==A[n-1])ans=n*(n-1)/2;
    else ans=max*min;

    cout<<A[n-1]-A[0]<<' '<<ans<<endl;
    return 0;

}
