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
        if(A[i]==A[i+1]){
            ++min;
            j=i;}
        else break;
    }
    for(i=n-1;i>j;i--)
    {
        if(A[i]==A[i-1])
            ++max;
        else break;
    }
  //if(A[0]==A[n-1]){}
    cout<<A[n-1]-A[0]<<' '<<max*min<<endl;
    return 0;

}

