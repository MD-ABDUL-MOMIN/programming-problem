#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    getchar();
    cin>>s1;
    //int i=0;
   // while(s[i]=='0')
   // {
      //  s.erase(s.begin());

    //}
    // while(s1[i]=='0')
    //{
     //   s1.erase(s1.begin());

    //}
    int l;
    string g,f;
    if(s.size()!=s1.size())
    {

        int l1=1;

      if(s.size()>s1.size())
      {
         l=s.size()-s1.size();
           while(l1<=l)
           {
               f+='0';
               l1++;
           }
          f+=s1;
          g=s;

      }
      else {
            l1=1;
            l=s1.size()-s.size();
            while(l1<=l)
           {
               g+='0';
               l1++;
           }
      //cout<<g<<endl;
         g+=s;
         f=s1;
      }


    }
    else{g=s;
    f=s1;

    }


    if(g<f)
    cout<<'<'<<endl;
    else if(f==g)cout<<'='<<endl;
    else cout<<'>'<<endl;





   return 0;
}
