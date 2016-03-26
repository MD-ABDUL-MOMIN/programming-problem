#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f,ans;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    ans=(a+b+c)*(a+b+c)-(a*a)-(c*c)-(e*e);
    cout<<ans<<endl;

    return 0;

}
