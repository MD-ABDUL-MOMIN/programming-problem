#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    int n,i,j,ans=0,N[256]={0};
    cin>>ch;
    n=ch.size();
    for(i=0;i<n;i++)
    {
        N[ch[i]]=1;
    }
    for(i='a';i<='z';i++)
    {
        if(N[i]>0)++ans;
    }
    cout<<ans<<endl;

    return 0;

}


