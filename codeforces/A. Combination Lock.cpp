#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string ch,ch1;
    scanf("%d",&n);
    getchar();
    cin>>ch;
    getchar();
    cin>>ch1;
    long long int ans=0;
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]<ch1[i])
             ans+=min(ch1[i]-ch[i],(ch[i]-'0')+(10-(ch1[i]-'0')));
        else ans+=min(ch[i]-ch1[i],10-(ch[i]-'0')+(ch1[i]-'0'));

    }
    cout<<ans<<endl;

    return 0;

}
