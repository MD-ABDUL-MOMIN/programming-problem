#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t;
    scanf("%d",&t);
    while(t--){
    double sum,p=0,N;
    unsigned long long int n,j=1,k=0;

    scanf("%llu",&n);
    while(j<=n)
    {
      ++k;
      j=j*2;
    }
    //cout<<p<<endl;
    N=n*(n+1);
    //cout<<N<<endl;
    p=-(pow(2,k)-1)+(N/2-(pow(2,k)-1));
    printf("%.0lf\n",p);
    }
    return 0;
}
