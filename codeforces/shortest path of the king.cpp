#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    vector<string>ans;
    int a,b,c,d,v,w;
    cin>>s>>t;
    v=t[0]-'a';
    w=t[0]-'0';
    a=t[0]-s[0];
    b=t[1]-s[1];
    int sig=0;
    if(a>=0&&b>=0)sig=1;
   else if(a<=0&&b>=0)sig=2;
    else if(a<=0&&b<=0)sig=3;
   else  if(a>=0&&b<=0)sig=4;
   if(a<0)a=a*-1;
   if(b<0)b=b*-1;
        int e,f;
        d=min(a,b);
        e=max(a,b);

        f=d;
        int f1=d;
        while(d--)
           if(sig==1) ans.push_back("RU");
           else if(sig==2) ans.push_back("LU");
        else if(sig==3) ans.push_back("LD");
          else if(sig==4) ans.push_back("RD");
          cout<<"V"<<v<<"f1"<<f1<<t[0]-'a'<<endl;
        while(f<e){
                if(sig==1){

                    if((v)==(s[0]-'a'+f1))
                        ans.push_back("U");
                    else ans.push_back("R");

            }
           else if(sig==2){

                    if((v)==(s[0]-'a'+f1))
                        ans.push_back("U");
                    else ans.push_back("L");
                              }
          else if(sig==3)
          {
               if((v+f1)==(t[0]-'a'))
                        ans.push_back("D");
                    else ans.push_back("L");
          }
          else if(sig==4) { if((v+f1)==(t[0]-'a'))
                        ans.push_back("D");
                    else ans.push_back("R"); }
          f++;
        }
        cout<<ans.size()<<endl;
        for(size_t k=0;k<ans.size();k++)
            cout<<ans[k]<<endl;
        return 0;
    }
