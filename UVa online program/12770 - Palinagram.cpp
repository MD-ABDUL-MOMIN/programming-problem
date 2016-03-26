#include<bits/stdc++.h>
#include<string>
//unsolved this problem
using namespace std;

int main()
{
    string sen;

    while(cin>>sen&&sen[0]!='#')
    {
        string ans,ans1;
        int mark[256]={0};
        int length=sen.size();
        for(int i=0;i<length;i++)
        {
            ++mark[sen[i]];
        }
        int s=0;
        for(int i='a';i<='z';i++)
        {
            if(mark[i]>0)ans+=i;
        }
        int L=ans.size();
        for(int k=0;k<L-1;k++)
        {
            if(mark[ans[k]]%2!=0)
            ans1+=ans[k];

        }
        cout<<ans1<<endl;

    }
    return 0;
}
