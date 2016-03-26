#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    long long int M[102][102],ans=1000000003,An=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {      ans=1000000003;
        for(int j=1;j<=m;j++)
            {
                scanf("%lld",&M[i][j]);
               if(ans>M[i][j])
                ans=M[i][j];
            }
            if(An<ans)An=ans;

    }
    cout<<An<<endl;
    return 0;
}
