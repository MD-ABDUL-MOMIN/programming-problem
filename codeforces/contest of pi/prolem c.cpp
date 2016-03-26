#include<iostream>
#include<algorithm>

using namespace std;
int N[200002]={0};
long long int A[200002],sum=1;
int factorial(int n);
int main()
{
    long long int i,j,k,n,ans=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        N[A[i]]++;
    }
    sort(A,A+n);
    for(j=0;j<n-2;j++)
for(i=0;i<n;i++)
{
    if(N[A[j]]>0&&N[A[j]*k]>0&&N[A[j]*k*k]>0)

    {
        if(N[A[j]]==n){
                ans=factorial(n)/(6*factorial(n-3));
                break;
        }
        else
           {
               ans=N[A[j]]*N[A[j]*k]*N[A[j]*k*k];

               i+=N[A[j]];

    }
    }

}
cout<<ans<<endl;

return 0;
}

int factorial(int n)
{
    int i;
  int sum=1;
  for(i=n;i>1;i--)
    sum*=i;
  return sum;
}
