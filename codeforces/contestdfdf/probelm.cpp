#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define sif(a) scanf("%d",&a)
#define sis(a,b) scanf("%d%d",&a,&b)
#define sit(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define slf(a) scanf("%lld",&a)
#define sls(a,b) scanf("%lld%lld",&a,&b)
#define slt(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define pt printf
#define mk make_pair
#define n printf("\n")
#define _ printf(" ")
#define pb push_back
#define pf push_front
int a[1001];
int main()
{

   int N,m,c,b;
   ll ans=0;
   scanf("%d%d",&N,&m);
   for(int i=1;i<=N;i++)
   {
       scanf("%d%d",&c,&b);
      if(a[c]>=1){if(a[c]<b)a[c]=b;

           }
           else a[c]=b;
   }
   for(int i=m;i>=0;i--)
   {


       //cout<<ans<<endl;
       if(m>i&&a[i]>0){ans+=(m-i);m=i;}
       if(ans<a[i])ans+=(a[i]-ans);


   }


   cout<<ans+m<<endl;






    return 0;
}

