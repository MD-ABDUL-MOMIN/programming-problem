#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int n,ans,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if(i==1)ans=k;
        ans=gcd(ans,k);
    }
    cout<<ans*n<<endl;

    return 0;

}
