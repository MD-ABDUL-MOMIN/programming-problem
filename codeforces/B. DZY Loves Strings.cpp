#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    int Counter[256]={0},w,max=0,k;
    cin>>word;
    scanf("%d",&k);
    for(int i=0;i<26;i++)
    {
        scanf("%d",&w);
        Counter['a'+i]=w;
        if(max<w)max=w;
    }
    long long int ans=0,tem;
    int Size=word.size();
    for(int i=1;i<=(Size+k);i++)
    {
        if(i<=Size)
        tem=(Counter[word[i-1]]*i);
      else tem=max*i;
       ans+=tem;
    }
    cout<<ans<<endl;

    return 0;



}
