#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        double x0,x1,A1,A2,B1,B2,r,a;
        scanf("%lf%lf%lf%lf%lf%lf",&x0,&x1,&A1,&A2,&B1,&B2);
        r=sqrt((x0-A1)*(x0-A1)+(x1-A2)*(x1-A2));
        a=sqrt((A1-B1)*(A1-B1)+(A2-B2)*(A2-B2));
        double ans=acos(1-a*a/(2*r*r))*r;
        printf("Case %d: %.9lf\n",t,ans);
        t++;


    }
    return 0;
}
