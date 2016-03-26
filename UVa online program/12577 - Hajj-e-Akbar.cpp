#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    int i=1;
    while(cin>>name&&name[0]!='*')
    {
       if(name=="Hajj")
        cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(name=="Umrah") cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
        ++i;
    }
    return 0;
}
