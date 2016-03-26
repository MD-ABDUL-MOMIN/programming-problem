#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    double a,b,n,ans;
    scanf("%lf%lf%lf",&n,&a,&b);

    if((a>=0&&b>=0)) ans=abs(b)/n-abs(a)/n;
    if(fmod(a,n)==0) ++ans;


    cout<<ans<<endl;

}
