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
int binary_sr(int A[],int p,int q,int S)
{
    int r;
    if(p<=q)
   {
    r=(p+q)/2;
    if(A[r]<S&&S<=A[q]) binary_sr(A,r+1,q,S);
    else if(A[r]>S&&A[p]<=S) binary_sr(A,p,r-1,S);
    else if(A[r]==S)
        cout<<"IT Is exist at point"<<r<<endl;
    else
        cout<<"IT IS NOT EXIST"<<endl;
   }
}
int main()
{
    int n,ans,F[1000];
    si1(n);
    for(int i=1;i<=n;i++)
        si1(F[i]);
        sort(F+1,F+n+1);
        ans=binary_sr(F,1,n,7);
        cout<<ans<<endl;
        return 0;

}
