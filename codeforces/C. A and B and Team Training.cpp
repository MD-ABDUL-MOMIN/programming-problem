#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,ans=0;
    scanf("%lld%lld",&a,&b);
    while(a>=0&&b>=0)
    {

        if(a>b) a=a-2,b=b-1;
        else b=b-2,a=a-1;
        if(a>=0&&b>=0)++ans;

    }
    cout<<ans<<endl;

    return 0;
}
