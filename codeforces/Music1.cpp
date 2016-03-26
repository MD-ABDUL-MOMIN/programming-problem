#include<iostream>
using namespace std;

int main()
{
    long long int S,T,Q;
    while(cin>>T>>S>>Q)
    {long long int ans=0;
        while(S<T)
        {
            S+=S*(Q-1);
            ++ans;
        }
        cout<<ans<<endl;
    }
    return 0;

}
