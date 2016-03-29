#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        int n,ans=0,p,tem;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p);
           if(i==1)tem=2;
           //if(i==1&&p!=2)++ans;

               ans+=((p-tem)/5);
               if((p-tem)%5!=0)++ans;
               tem=p;
        }
        printf("Case %d: %d\n",t,ans);
        t++;
    }
    return 0;
}
