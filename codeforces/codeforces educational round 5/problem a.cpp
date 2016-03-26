#include<bits/stdc++.h>

using namespace std;
/*
int main()
{

string g,e,ch,m;
cin>>g;
getchar();
cin>>e;
int p=0;
for(int i=0;i<g.size();i++)
    {
        if(g[i]=='0'&&p==0)
            continue;
        else{
            ch+=g[i];
            p=1;
        }

    }
   p=0;
for(int i=0;i<e.size();i++)
    {if(e[i]=='0'&&p==0)
      continue;
      else{

           m+=e[i];
           p=1;
      }

    }
p=0;
//cout<<ch<<' '<<m<<endl;

if(ch.size()>m.size())
{
    cout<<'>'<<endl;

}
 else if(ch.size()==m.size())
   {
       int p=0;
       if(ch==m)cout<<'='<<endl;
       else{
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]>m[i]){
          p=1;break;
        }
        else if(ch[i]<m[i])
        {
            p=2;break;
        }



    if(p==1)
        cout<<'>'<<endl;
else cout<<'<'<<endl;
    }

       }
   }

else cout<<'<'<<endl;

return 0;
}
*/

int main()
{
  double l,r,k,n1,n2,i,j;
   cin>>l>>r>>k;
   cout<<n1<<endl;
    n1=floor(pow(l,1.00/k));

    n2=pow(k,n1-1);

   // cout<<n1<<' '<<n2<<endl;
   if(n2<l)n2=n2*k;
     double L=floor(n2);
     int p=0;
    for(i=n1;L<=r;i++)
    {
        if(L>=l&&L<=r){cout<<L<<' ';p=1;}
        L=L*k;
    }
    if(p==0)cout<<"-1"<<endl;
    cout<<'\n';

    return 0;

}



