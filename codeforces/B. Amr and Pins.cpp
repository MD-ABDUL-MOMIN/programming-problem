#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,y,x1,y1,r,ans;
    double distance;
    scanf("%lld%lld%lld%lld%lld",&r,&x,&y,&x1,&y1);
    distance=sqrt((x-x1*1.00)*(x-x1)+(y-y1)*(y-y1*1.00));
    ans=ceil(distance/(2*r));
    cout<<ans<<endl;

    return 0;
}
