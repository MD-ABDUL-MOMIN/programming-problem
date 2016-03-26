#include<bits/stdc++.h>
#include<string>
using namespace std;
int mark[256];

int main()
{
    string ch;
    cin>>ch;
    int p=0,q=0,M;
    if(!ch.find("AB"))
        p=1;
    if(!ch.find("BA"))
        q=1;
        M=ch.size();
    for(int i=0;i<M-1;i++)
    {
        if(ch[i]=='A'&&ch[i+1]=='B')
        {
            ++mark[ch[i]];
            ++mark[ch[i+1]];
        }
        if(ch[i]=='B'&&ch[i+1]=='A')
        {

        }

    }



    return 0;
}
