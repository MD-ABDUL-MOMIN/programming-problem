#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
  long long int N,i,j,K,ans,A[200003];
  scanf("%lld",&N);
  for(i=0;i<N;i++)
  {
      cin>>A[i];
      if(i==0)ans=A[i];
      ans=gcd(ans,A[i]);
      cout<<ans<<endl;
  }
  int l=0;
  for(i=0;i<N;i++)
  {
      int d=A[i]/ans;
      if(d%2==0||d%3==0||d==1)
      {l=0;}
      else l=1;


  }

  if(l==0)
    printf("Yes\n");
  else printf("No\n");

  return 0;

}
/*
int main()
{
  long long int N,i,j,K,ans,A[200003];
  scanf("%lld",&N);
  for(i=0;i<N;i++)
  {
      cin>>A[i];
 while(A[i]%2==0)A[i]=A[i]/2;
 while(A[i]%3==0)A[i]=A[i]/3;
 //cout<<A[i]<<endl;
  }
 int l=0;
  for(i=0;i<N-1;i++)
  {

      if(A[i]!=A[i+1])
      {l=1;break;}


  }

  if(l==0)
    printf("Yes\n");
  else printf("No\n");

  return 0;

}
*/

