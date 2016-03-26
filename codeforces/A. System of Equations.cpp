#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int m,n,i,j,ans=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<=m;i++)
    {
        if((i+(n-i*i)*(n-i*i)==m)&&(n-i*i)>=0)
            ++ans;
    }
    cout<<ans<<endl;

    return 0;
}

