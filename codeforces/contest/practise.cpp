/***********Bismillahir rahmanir rahim *******/


#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define sif(a) scanf("%d",&a)
#define sis(a,b) scanf("%d%d",&a,&b)
#define sit(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define slf(a) scanf("%lld",&a)
#define sls(a,b) scanf("%lld%lld",&a,&b)
#define slt(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define pt printf
#define mk make_pair
#define n printf("\n")
#define _ printf(" ")
#define pb push_back
#define pf push_front

int main()
{

     list<long long int>b;
     b.push_back(4);
     b.push_back(4);
     b.push_back(4);
     b.pb(5);
     b.pf(3);
     b.pf(3);
     b.pf(3);

     list<long long int >::iterator i,j;
     for(i=b.begin();i!=b.end();i++)
        pt("%lld ",*i);
        n;
        cout<<b.size()<<endl;
        j=upper_bound(b.begin(),b.end(),3);
        cout<<j-b.begin()<<endl;

     n;
     return 0;
}
