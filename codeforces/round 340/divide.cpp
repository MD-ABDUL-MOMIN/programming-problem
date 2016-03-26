#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define si1(a) scanf("%d",&a)
#define sf1(a) scanf("%f",&a)
#define sd1(a) scanf("%lf",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define sf2(a,b) scanf("%f%f",&a,&b)
#define sd2(a,b) scanf("%lf%lf",&a,&b)
#define sc scanf
#define pi1(a) printf("%d",a)
#define pf1(a) printf("%f",a)
#define pd1(a) printf("%lf",a)
#define pi2(a,b) printf("%d %d",a,b);
#define     pf2(a,b) printf("%f %f",a,b)
#define _ '\n'
#define T(i,d) printf("Case %d: %d",i,d)
#define fw(i,a,b) for(i=a;i<=b;i++)
#define bw(i,a,b) for(i=b;i>=a;i--)
int Max=0;
int f(int a[],int p,int q)
{ int i;
    if(p<q)
    {
        int r=(p+q)/2;
        f(a,p,r);
        f(a,r+1,q);
        for(i=p;i<=q;i++)
            if(Max<a[i])
                Max=a[i];
    }

}
int main()
{
    int a[100],b,i,j;
    cin>>b;
    fw(i,1,b)
    cin>>a[i];
      f(a,1,b);
    cout<<Max<<endl;

    return 0;

}
