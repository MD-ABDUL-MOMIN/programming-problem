#include<bits/stdc++.h>

using namespace std;
double PI=acos(-1);
double angle(double a,double b,double c,double R);
int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        double r1,r2,r3, a,c,b,area,s;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        c=r1+r2;
        b=r1+r3;
        a=r2+r3;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));

        area=area-(angle(a,b,c,r1)+angle(b,a,c,r2)+angle(c,a,b,r3));

        printf("Case %d: %.9lf\n",t,area);
        t++;


    }
    return 0;
}
double angle(double a,double b,double c,double R)
{
    double An_gle=acos((b*b+c*c-a*a)/(2*b*c));

    double A=(R*R*An_gle)/2;

    return A;
}
