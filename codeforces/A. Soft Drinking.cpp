#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,i=1,ans;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

   ans=min((k*l)/nl,min(c*d,p/np))/n;

   // int ans=(i-1)/n;

    cout<<ans<<endl;

    return 0;


}
