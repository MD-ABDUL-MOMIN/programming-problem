#include<bits/stdc++.h>

using namespace std;
int N[1002][1002];
int main()
{
    long long int n,m,i,k,x,y,ans=0;
    scanf("%lld%lld%lld",&n,&m,&k);
    for(i=1;i<=k;i++)
    {
        scanf("%lld%lld",&x,&y);
        N[x][y]=1;
        if(((N[x][y]==1&&N[x+1][y]==1&&N[x][y-1]==1&&N[x+1][y-1]==1)||(N[x-1][y]==1&&N[x][y]==1&&N[x-1][y-1]==1&&N[x][y-1]==1)||(N[x-1][y+1]==1&&N[x][y+1]==1&&N[x-1][y]==1&&N[x][y]==1)||(N[x][y+1]==1&&N[x+1][y+1]==1&&N[x][y]==1&&N[x+1][y]==1))&&ans==0)
        {

            ans=i;
        }
    }
    printf("%lld",ans);
    return 0;

}
