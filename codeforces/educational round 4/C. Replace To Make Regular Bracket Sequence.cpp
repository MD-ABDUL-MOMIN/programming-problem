#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long int i,ans=0;
    stack<char>n,r;  int c[400]={0};
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='<'||s[i]=='{'||s[i]=='('||s[i]=='[')
            n.push(s[i]);
        else {
               if(!n.empty())
               {
                  if(n.top()=='{'&&s[i]=='}')
                   n.pop();
                   else if(n.top()=='('&&s[i]==')')
                    n.pop();
                   else if(n.top()=='['&&s[i]==']')
                    n.pop();
                   else if(n.top()=='<'&&s[i]=='>')
                    n.pop();
                   else if(n.top()=='<'&&s[i]=='}')
                    n.pop();
                    else {r.push(s[i]);}







               }
               else {

        r.push(s[i]);}



        }
    }
 ans=r.size()+n.size();

    while(!n.empty())
    {


     ++c[n.top()];
        n.pop();
    }

    while(!r.empty())
    {

        if(r.top()=='>')
        --c['<'];
        else if(r.top()=='}')
        --c['{'];
        else if(r.top()==']')
            --c['['];
        else if(r.top()==')')
            --c['('];
        r.pop();
    }
     if((c['<']==0&&c['{']==0&&c['[']==0&&c['<']==0))
       cout<<ans<<endl;
    else cout<<"Impossible"<<endl;
    //cout<<ans<<endl;

    return 0;

}
