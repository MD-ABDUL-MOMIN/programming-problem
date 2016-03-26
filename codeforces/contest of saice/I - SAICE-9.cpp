#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    pair<int,int>name[1001];
    int Xa,Xb,Ya,Yb,n;
    scanf("%d%d%d%d",&Xa,&Ya,&Xb,&Yb);
  //  scanf("%d",&n);
   // int x[1001],y[1001],r[1001];
   // for(int i=0;i<n;i++)
     //   scanf("%d%d%d",&x[i],&y[i],&r[i]);
        int k=1;
    for(int i=Yb;i<=Ya;i++)
    {
        name[k].first=Xa,name[k].second=i;
        ++k;
        name[k].first=Xb,name[k].second=i;
        ++k;
    }
    for(int i=Xa+1;i<Xb;i++)
    {
        name[k].first=i,name[k].second=Yb;
        ++k;
        name[k].first=i,name[k].second=Ya;
        ++k;
    }
    for(int i=1;i<k;i++)
        cout<<name[i].first<<' '<<name[i].second<<endl;




    return 0;



}
