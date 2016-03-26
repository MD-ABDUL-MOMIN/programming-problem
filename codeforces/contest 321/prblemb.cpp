#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

long long int M[100000003];
int main()
{
    int n,i,j,ans;
    long int d,S[10001],F[10001],tem,rem,T=1000000002,M=0;
    scanf("%d%lld",&n,&d);

    for(int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&S[i],&F[i]);
        M[S[i]]=F[i];
        if(T>S[i])T=S[i];
        M<S[i]?M=S[i];
    }
     for(i)

    for(i=1;i<=n;i++)
        printf("%lld %lld\n",S[i],F[i]);












    return 0;
}
    /*Time limit exceed
    long long int d,S[10001],F[10001],tem,sig;
    scanf("%d%lld",&n,&d);
    long long int max=0,ans1=0;
    for(i=1;i<=n;i++)
        scanf("%lld%lld",&S[i],&F[i]);

    for(i=1;i<=n;i++)
    {   ans=S[i];
         ans1=F[i];
        for(j=1;j<=n;j++)
        {
          if(i!=j)
          {
              tem=S[j]-ans;
              if(tem<d&&tem>=0)
              {ans1+=F[j];
              }

          }

        }
        if(max<ans1)max=ans1;
    }
    printf("%lld\n",max);
    return 0;
}
*/
