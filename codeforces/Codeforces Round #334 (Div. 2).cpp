#include<bits/stdc++.h>

#define ll long long int
#define L1(a) scanf("%lld",&a)
#define L2(a,b) scanf("%lld%lld",&a,&b)
#define PB(a) push_back(a)

using namespace std;
//codeforces b solution
int main()
{
    long long int n,k,i=0,m,l,M;
    vector<long long int>name;


    scanf("%lld%lld",&n,&k);
    name.PB(0);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m);
        name.PB(m);

    }
      long long int ans,p,q,sig;

    p=name[n];
    q=1;
    sig=n-k;
    for(i=2*(n-k);i>sig;i--,q++)
    {
      l=name[i]+name[q];
      if(l>p)
        p=l;


    }
    cout<<p<<endl;
    return 0;

}

/*codeforces a problem solution
using namespace std;

int main()
{
 int a,b,c,d,e,w1,w2,w3,w4,w5,h1,h2;
 long long int ans=0;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  scanf("%d%d%d%d%d",&w1,&w2,&w3,&w4,&w5);
  scanf("%d%d",&h1,&h2);

  ans+=max(150,(500-a*2-50*w1));
  ans+=max(300,(1000-b*4-50*w2));
  ans+=max(450,(1500-c*6-50*w3));
  ans+=max(600,(2000-d*8-50*w4));
  ans+=max(750,(2500-e*10-50*w5));

  ans+=(h1*100-h2*50);

  cout<<ans<<endl;




    return 0;
}
*/


