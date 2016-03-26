#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    double sum=0,ans;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     scanf("%d",&m);
     sum+=m;
    }
    ans=sum/n;
   printf("%lf\n",ans);

    return 0;
}
