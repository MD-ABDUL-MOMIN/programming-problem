#include<bits/stdc++.h>

using namespace std;
int A[1000002];
int main()
{
    int n;
    long long int M,W[10002],k,Q,sum=0,p=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&M);
        sum+=M;
        for(int j=p;j<=sum;j++){
              A[j]=i;
           //   cout<<j<<' '<<A[j]<<endl;
        }
              p=sum+1;

    }
    scanf("%lld",&M);
    for(k=1;k<=M;k++){
        scanf("%lld",&Q);
        printf("%d\n",A[Q]);
    }


    return 0;
}
