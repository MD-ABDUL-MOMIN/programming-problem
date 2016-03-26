#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int r,c;
    char ch[11][11],ch1[11][11];
    int n[12][12];
    for(int i=0;i<=11;i++)for(int j=0;j<=11;j++)n[i][j]=1;
    cin>>r;
    cin>>c;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
          ch[i][j]=getchar();
        getchar();
    }
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
          ch1[i][j]=ch[j][i];
    }

   int ans=0,L=0,m=0;

   for(int i=0;i<r;i++)
   {
       cout<<" dk"<<ch[i]<<endl;
       if(!strstr(ch[i],"S")){
        ans+=c;++L;
       }

   }
    for(int i=0;i<c;i++)
   {
       cout<<"ch1"<<ch1[i]<<endl;
       if(!strstr(ch1[i],"S")){
        ans+=r;++m;
        cout<<" M"<<m<<endl;
       }

   }
   cout<<m<<' '<<L<<endl;
   ans-=m*L;


    cout<<ans<<endl;

    return 0;
}
