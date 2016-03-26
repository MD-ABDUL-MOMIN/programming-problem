#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ans=0,l,a[101];
    scanf("%d%d",&n,&m);
    while(n--){
    for(int i=1;i<=2*m;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0&&(a[i-1]==0||a[i]==0))
            ++ans;

    }

    }
    cout<<ans<<endl;



    return 0;
}
