#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sn(n) scanf("%d",&n)
#define foralli(a,i,n) for(int a=i;a<n;a++)
#define foralld(a,i,n) for(int a=n-1;a>=i;a--)
#define sp(n) printf("%d\n",n)
#define gcd _gcd

int main()
{
    int n,N[1002],i;
    sn(n);
    foralli(i,0,n)sn(N[i]);
    int s=0,ans=0;
    while(1)
    {
        foralli(i,0,n)
        {
            if(N[i]<=s){
                N[i]=n+1;s++;
                }
        }
        if(s==n)break;
        ans++;
        foralld(i,0,n)
         {
             if(N[i]<=s){N[i]=n+1;s++;}
         }
         if(s==n)break;
         ans++;

    }
    sp(ans);
   int m=_gcd(2,5);
   sp(m);
    return 0;
}
