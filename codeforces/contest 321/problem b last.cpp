#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,j,d;
   scanf("%d%d",&n,&d);
  vector<pair<int,int> >S(n);

  for(i=0;i<n;i++)
    scanf("%d %d",&S[i].first,&S[i].second);
  sort(S.begin(),S.end());
  int l=0,m=0,sig;
  long long int sum=0,max=0;
for(i=0;i<n;i++)
{
    sum+=S[i].second;
      while((S[i].first-S[l].first)>=d)
     {
      sum-=S[l].second;
      l++;
     }
       if(max<sum)max=sum;
  }

  cout<<max<<endl;
return 0;
}
