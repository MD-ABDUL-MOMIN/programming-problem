#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        int n,m,ans;
        scanf("%d%d",&n,&m);
        if(n==1||m==1)ans=n*m;
        else if(n==2||m==2)
        {
            ans=max(n,m)/4;
           int c=max(n,m)%4;
           ans=ans*4;
        if(c==1)ans+=2;
        else if(c==2)ans+=4;
        else if(c==3)ans+=4;

        }
        else {
            if(n*m%2==0)ans=(n*m)/2;
            else ans=(n*m+1)/2;
        }
        printf("Case %d: %d\n",t,ans);
        t++;
    }
    return 0;
}
