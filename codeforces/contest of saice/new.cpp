#include<bits/stdc++.h>

using namespace std;
//long long int N;
//long long int  number(long long int n)
//{
 // ++N;
   // if(n==1)return N;
   // if(n%2==0) return number(n/2);
   // else return number(3*n+1);
//}
int mark[10000004];
int main()
{

    long long int m,n,tem,max=0,ans,p,q;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        if(m==0&&n==0)break;
      if(m>n){p=n;q=m;
      }
      else {p=m,q=n;}
        max=0;

        for(long long int i=p;i<=q;i++)
    {
        tem=i;
        if(mark[i]==0)
        {
        long long int N=0;
        if(i!=0){
         do
          {++N;
          if(tem%2==0)tem=tem/2;
          else tem=tem*3+1;
          if(tem>=p&&tem<=q)
          mark[tem]=1;

          }
          while(tem!=1);
          if(max<N){max=N;ans=i;}
         // mark[i]=1;
        }
        }
        }

        cout<<"Between "<<p<<' '<<"and"<<' '<<q<<','<<' '<<ans<<' '<<"generates the longest sequence of "<<max<<" values."<<endl;
           for(long long int i=p;i<=q;i++)mark[i]=0;
        max=0;
    }
            return 0;
    }
/*
int main()
{
    long long int m,n,ans1,p,q,N,Q,R;
    while(scanf("%lld%lld",&Q,&R)==2)
    {
        if(Q>R)m=R,n=Q;
        else m=Q,n=R;

        long long int ans=0,i;
        for(i=m;i<=n;i++)
        {  N=0;
        int s=1;
        p=i;
          while(s)
          {
              ++N;
              if(p==1)s=0;
              else{
              if(p%2==0)p=p/2;
              else p=3*p+1;
              }
          }
            if(ans<N)ans=N;


        }
        printf("%lld %lld %lld\n",Q,R,ans);
        ans=0;

    }
    return 0;
}
*/
