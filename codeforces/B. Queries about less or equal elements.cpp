#include<bits/stdc++.h>
#include<map>
using namespace std;
 long long int N[200005];
int main()
{
    long long int i,n,m,h=0,M,w,ans;
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%lld",&N[i]);
        sort(N+1,N+n+1);
     //N[n+1]=N[n]+1;
        long long int mid;
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&w);
            if(w>=N[n])ans=n;
            else if(w<N[1])ans=1;
            else{
               h=1;
                M=n;
        while(h<M)
        {
           int mid=(h+M)/2;
            if(N[mid]<=w&&N[mid+1]>w){ans=mid;}
            if(N[mid]>w)
            {
                M=mid;
            }
            else h=mid+1;
        }
            }
         printf("%lld ",ans);
         if(i==m)printf("\n");
        }






    return 0;

}
