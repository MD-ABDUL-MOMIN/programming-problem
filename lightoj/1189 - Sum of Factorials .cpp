#include<bits/stdc++.h>

using namespace std;
 long long int F[22];
void fact()
{

    F[0]=1;
    for(int i=1;i<=20;i++)
    {
          F[i]=F[i-1]*i;
         // cout<<F[i]<<endl;

    }



}
int main()
{
  int t=1,T;
  scanf("%d",&T);
  long long int N,tem;
  fact();
  while(t<=T)
  {
      scanf("%lld",&N);
      int i=20,sig=0;
      vector<int>P;
      tem=N;
      while(N>0&&i>=0)
      {
          if(N>=F[i]){  N=N-F[i];P.push_back(i);}
        --i;
      }
 //cout<<N<<endl;
      if(P.size()==0||N!=0)
      {
          printf("Case %d: impossible\n",t);
      }
      else {

        printf("Case %d: ",t);
        for(int j=P.size()-1;j>=0;j--)
         if(j!=0)
            printf("%d%c%c",P[j],'!','+');
        else
            printf("%d%c\n",P[j],'!');
      }
      t++;
  }

  return 0;
}
