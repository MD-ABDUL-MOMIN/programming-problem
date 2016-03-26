#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int t;
    map<int,int>a;
   int s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(a[s])
            cout<<s<<' '<<a[s]<<endl;

        else cout<<"OK"<<endl;
        ++a[s];
    }


    return 0;
}
