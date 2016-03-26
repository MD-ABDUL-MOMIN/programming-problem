#include<bits/stdc++.h>
using namespace std;
int recognition[4001];
int N[4001],M[4001];
bool check[4001][4001];
int main()
{      int i,ans,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&N[i],&M[i]);
        check[N[i]][M[i]]=check[M[i]][N[i]]=true;
        recognition[N[i]]++;
        recognition[M[i]]++;
    }
    ans=1e9;
    int tem;
    for(i=0;i<m;i++)
    {
       for(j=1;j<=n;j++)
        if(check[N[i]][j]&&check[j][M[i]])
        {
            tem=recognition[N[i]]+recognition[M[i]]+recognition[j];
            ans=min(ans,tem);
        }

    }
    if(ans==1e9)
      ans=-1;
    else ans-=6;

printf("%d\n",ans);
    return 0;

}
