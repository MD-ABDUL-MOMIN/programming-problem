#include<bits/stdc++.h>

using namespace std;
int b[101],g[101];
int main()
{
    int n,ans,m;
    scanf("%d%d",&n,&m);
       ans=max(n,m)+(min(n,m)-1);
       cout<<ans<<endl;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(b[i]==0||g[j]==0)
               {
                   cout<<i<<' '<<j<<endl;
                   b[i]=1;
                   g[j]=1;

               }
           }
       }

    return 0;
}
