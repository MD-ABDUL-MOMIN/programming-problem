#include<bits/stdc++.h>

#define pb(a) push_back(a)
using namespace std;

int main()
{
    vector<string>num;
    vector<int>two,th3,four;
    two.pb(6),two.pb(2),two.pb(4),two.pb(8);
    th3.pb(1),th3.pb(3),th3.pb(9),th3.pb(7);
    four.pb(6),four.pb(4);
    int tem,sum=0,rem=0,rem1=0,ans;
    string ch;
    cin>>ch;
    num.push_back(ch);
    for(size_t i=0;i<ch.size();i++)
    {
        tem=num[0][i]-'0';
        rem=(rem*10+tem)%4;
        rem1=(rem1*10+tem)%2;

    }
    ans=(1+two[rem]+th3[rem]+four[rem1])%5;
    cout<<ans<<endl;
    return 0;
}
