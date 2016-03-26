#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f;
    while(scanf("%d",&n)==1&&(n>0&&n<100000))
    {
        while(n-->0)
        {scanf("%d",&f);
        long long int a,b,c,sum=0;
        while(f-->0)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            sum+=(a*c);
        }


    cout<<sum<<endl;
    }
    }
    return 0;
}
