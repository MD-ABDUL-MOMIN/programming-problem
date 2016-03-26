#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3;

    while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
   long long int ans[7];
    ans[1]=g1+c1+b2+c2+b3+g3;
    ans[2]=g1+c1+b2+g2+b3+c3;
    ans[3]=b1+c1+b2+g2+g3+c3;
    ans[4]=b1+c1+g2+c2+b3+g3;
    ans[5]=b1+g1+c2+g2+b3+c3;
    ans[6]=b1+g1+b2+c2+c3+g3;
   long long int Ans;

    vector<string>ch;

    if(ans[1]<=ans[1]&&ans[1]<=ans[2]&&ans[1]<=ans[3]&&ans[1]<=ans[4]&&ans[1]<=ans[5]&&ans[1]<=ans[6])
        {ch.push_back("BGC");Ans=ans[1];}
    //cout<<"BGC"<<' '<<ans[1]<<endl;
   if(ans[2]<=ans[1]&&ans[2]<=ans[2]&&ans[2]<=ans[3]&&ans[2]<=ans[4]&&ans[2]<=ans[5]&&ans[2]<=ans[6])
        {ch.push_back("BCG");Ans=ans[2];}

      //  cout<<"BCG"<<' '<<ans[2]<<endl;
  if(ans[3]<=ans[1]&&ans[3]<=ans[2]&&ans[3]<=ans[3]&&ans[3]<=ans[4]&&ans[3]<=ans[5]&&ans[3]<=ans[6])
       {ch.push_back("GCB");Ans=ans[3];}

       //cout<<"GCB"<<' '<<ans[3]<<endl;
   if(ans[4]<=ans[1]&&ans[4]<=ans[2]&&ans[4]<=ans[3]&&ans[4]<=ans[4]&&ans[4]<=ans[5]&&ans[4]<=ans[6])
{ch.push_back("GBC");Ans=ans[4];}
    // cout<<"GBC"<<' '<<ans[4]<<endl;
    if(ans[5]<=ans[1]&&ans[5]<=ans[2]&&ans[5]<=ans[3]&&ans[5]<=ans[4]&&ans[5]<=ans[5]&&ans[5]<=ans[6])
 {ch.push_back("CBG");Ans=ans[5];}
      //cout<<"CBG"<<' '<<ans[5]<<endl;
       if(ans[6]<=ans[1]&&ans[6]<=ans[2]&&ans[6]<=ans[3]&&ans[6]<=ans[4]&&ans[6]<=ans[5]&&ans[6]<=ans[6])
       {ch.push_back("CGB");Ans=ans[6];}
    //cout<<"CGB"<<' '<<ans[6]<<endl;
     sort(ch.begin(),ch.end());
     cout<<ch[0]<<' '<<Ans<<endl;
     ch.clear();



    }

    return 0;
}
