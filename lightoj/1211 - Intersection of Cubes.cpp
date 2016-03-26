#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1,y1,z1,x2,y2,z2,t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        int m,a=0,b=0,c=0,d=10001,e=10001,f=10001;
        long long int ans;
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
            a=max(a,x1);
            b=max(y1,b);
            c=max(z1,c);
            d=min(d,x2);
            e=min(e,y2);
            f=min(f,z2);



        }
        if((f-c)<=0||(e-b)<=0||(d-a)<=0)ans=0;
        else
         ans=(f-c)*(e-b)*(d-a);

        printf("Case %d: %lld\n",t,ans);
        t++;
    }
    return 0;
}
