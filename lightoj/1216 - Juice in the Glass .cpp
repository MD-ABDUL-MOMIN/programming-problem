#include<bits/stdc++.h>

using namespace std;

//#define PI 2acos(-1.00)

int main()
{
    int t=1,T;
    scanf("%d",&T);
    double PI=acos(-1.00);
    while(t<=T)
    {
        int r1,r2,p,h;
        double ans;
        scanf("%d%d%d%d",&r1,&r2,&h,&p);
        ans=(PI*p/3.00)*(r2*r2+(r2+(r1-r2)*p/(h*1.00))*r2+(r2+(r1-r2)*p/(h*1.00))*(r2+(r1-r2)*p/(h*1.00)));

        printf("Case %d: %.9lf\n",t,ans);
        t++;
    }
    return 0;
}
