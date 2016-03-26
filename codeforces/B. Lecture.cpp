#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main()
{

    string ch2[100],ch1[100];
    map<string,string>ch;
    int n,m,i,j=0;
    scanf("%d%d",&n,&m);
    getchar();
    while(m--)
    {
         cin>>ch2[j]>>ch1[j];
        if(ch2[j].size()<=ch1[j].size())
            ch[ch2[j]]=ch2[j];
        else ch[ch2[j]]=ch1[j];
       // cout<<ch[ch2[j]]<<endl;
        getchar();
        ++j;
    }
 i=0;
 string name[n+1];
 int p=n;
    while(n--)
    {
        cin>>name[i];
        i++;
        getchar();
    }
    for(i=0;i<p;i++)
        cout<<ch[name[i]]<<' ';



return 0;

}
