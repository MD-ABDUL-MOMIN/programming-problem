#include<bits/stdc++.h>
#include<cstdlib>
#include<cmath>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<string.h>
#define ll long long int
#define ull unsigned long long int
#define Ii int
#define D double
#define I(a) scanf("%d",&a)
#define I2(a,b) scanf("d%d",&a,&b)
#define I3(a,b,c) scanf("dd",&a,&b,&c)
#define L(a) scanf("%lld",&a)
#define L2(a,b) scanf("lld",&a,&b)
#define L3(a,b,c) scanf("lldlld",&a,&b,&c)
#define PI(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PT(t) printf("Case %d: ",t)
#define F(I1,a,b) for(int I1=a;I1<=b;I1++)
#define FR(I2,a,b) for(int I2=a;I2>=b;I2--)
#define FL(J,a,b) for(long long J=a;J<=b;J++)
#define FLR(J1,a,b) for(long long J1=a;J1>=b;J1--)
#define IT(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define ITP(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) {  cout << *it << " "; } cout << endl;
#define PB push_back
#define xx first
#define yy second
#define SC scanf
#define PC printf
#define NL printf("\n")
#define SET(a) memset(a,0,sizeof a)
#define SETR(a) memset(a,-1,sizeof a)
#define SZ(a) ((int)a.size())
//#define pi 2.0*acos(0.0)
#define R(a) freopen(a, "r", stdin);
#define W(a) freopen(a, "w", stdout);
#define CB(x) __builtin_popcount(x)
#define STN(a) stringtonumber<ll>(a)
#define lol printf("BUG\n")
#define mk make_pair

using namespace std;

int main()
{
 Ii a,i,N[3002],Five=0,zero=0,one=-1,sum=0,m=0;
 I(a);
 F(i,1,a)
 {
     I(N[i]);
     if(N[i]==5){++Five;sum+=5;if(sum%9==0)m=Five;}
     else ++zero;


 }
 if(m>0&&zero>0)
 {

     F(i,1,m+zero)
     {
         if(i<=m)
            printf("5");
         else printf("0");
     }
 }
 else if(zero>0&&m==0)
    printf("0");
 else PI(one);



return 0;
}

