#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,F;

    scanf("%lld%lld",&a,&b);
     int f[100]={6,2,5,5,4,5,6,3,7,6};
  long long int ans=0;
    for( F=a;F<=b;F++)
    {
        d=F;

        while(d>0)
        {
            ans+=f[d%10];
            d=d/10;
        }
    }

    cout<<ans<<endl;
    return 0;
}
