#include<iostream>

using namespace std;

int main()
{
    long long int x,i,ans=0;
    cin>>x;
    while(x!=0)
    {
        ans+=(x%2);
        x=x/2;
    }
    cout<<ans<<endl;
    return 0;
}
