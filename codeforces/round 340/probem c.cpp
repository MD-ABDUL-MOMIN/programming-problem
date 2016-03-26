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
#define pi2(a,b) printf("%d %d",a,b)
#define     pf2(a,b) printf("%f %f",a,b)
#define _ '\n'
#define T(i,d) printf("Case %d: %d",i,d)
#define fw(i,a,b) for(i=a;i<=b;i++)
#define bw(i,a,b) for(i=b;i>=a;i--)
#define pr printf
int Match(int A[],int i,int n,int S)
{
   for(int j=i;j<=n;j++)
   {
       if(S==A[j])
        return 1;
   }
   return 0;
}
int ans=0;
int divide_and_conqure(int A[],int p,int q,int j)
{
    int r;
    if(p<q)
    {
        r=(p+q)/2;
       divide_and_conqure(A,p,r,j);
       divide_and_conqure(A,r+1,q,j);
       ans+=Match(A,p,q,j);
    }
        else if(p==q)
    {
        ans+=Match(A,p,q,j);
    }

}

int main()
{
    int n,i,j,A[1000];
    si1(n);
    fw(i,1,n)
    si1(A[i]);
    pr("\nEnter the value of searching number\n");
    si1(j);
    divide_and_conqure(A,1,n,j);
    if(ans==0)cout<<"This number is not exists"<<endl;
    else cout<<"This number is exists "<<endl;

}
