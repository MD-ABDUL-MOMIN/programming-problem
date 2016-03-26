#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
    if((c+e<=a&&max(d,f)<=b)||(c+e<=b&&max(d,f)<=a))
        cout<<"YES"<<endl;
    else if((c+f<=a&&max(d,e)<=b)||(c+f<=b&&max(d,e)<=a))
        cout<<"YES"<<endl;
    else if((d+e<=a&&max(c,f)<=b)||(d+e<=b&&max(c,f)<=a))
        cout<<"YES"<<endl;
    else if((d+f<=a&&max(c,e)<=b)||(d+f<=b&&max(c,e)<=a))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
