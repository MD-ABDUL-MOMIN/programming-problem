#include<bits/stdc++.h>

using namespace std;

int main()
{
    double v1,v2,v3,a1,a2,d,d1,D,t1;
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        d=v1*v1/(2*a1);
        d1=v2*v2/(2*a2);
        d+=d1;
        t1=(v1/a1+v2/a2)/2;
        t1=t1*v3;
        printf("Case %d: %.9lf %.9lf\n",t,d,t1);
        t++;

    }
    return 0;
}
