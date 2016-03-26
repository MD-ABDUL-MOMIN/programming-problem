#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    while(n-->0)
    {
        cin>>m;
      if(360%(180-m)==0)
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
