
/** || By The Name of Allah, Who Created Me. || **/

/**
	* Author   : Farid ul Islam Chy.
	* ID       : 1512020238.
	* Batch    : 38th.
	* Semester : 4C(E).
	* Team     : LU_AntiVirus.

	* Leading University, Sylhet.
**/

#include <map>
#include <set>
#include <stack>
#include <queue>
#include <math.h>
#include <cstdio>
#include <vector>
#include <cstring>
#include <utility>
#include <ctype.h>
#include <iomanip>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stdlib.h>
#include <fstream>

using namespace std;

#define ll    		    long long int
#define SS		    stringstream
#define pb    		    push_back
#define ull    		    unsigned long long int
#define MII        	    map <int,int>
#define MSI        	    map <string,int>
#define MIS        	    map <int,string>
#define MLI         	    map <long long int,int>
#define MIL        	    map <int,long long int>
#define MLL        	    map <ll,ll>
#define VS        	    vector <string>
#define VI        	    vector <ll>
#define VC        	    vector <char>
#define ForA(n)  	    for (int i=0; i<n; i++)
#define ForA2(n)  	    for (int j=0; j<n; j++)
#define ForA3(n)  	    for (int k=0; k<n; k++)
#define ForAS(n)  	    for (int i=n; i>0; i--)
#define ForN(n)  	    for (int i=1; i<=n; i++)
#define ForN2(n)  	    for (int j=1; j<=n; j++)
#define ForN3(n)  	    for (int k=1; k<=n; k++)
#define ForD(m,n)  	    for (int i=m; i<=n; i++)
#define ForD2(m,n)  	    for (int j=m; j<=n; j++)
#define ForD3(m,n) 	    for (int k=m; k<=n; k++)
#define SortA(n,x) 	    sort(n,n+x)
#define SortS(s)  	    sort(s.begin(), s.end())
#define SortRS(s)  	    sort(s.rbegin(), s.rend())
#define Search(s)           s.begin(), s.end()
#define SortSG(n)	    sort(n.begin(), n.end(), greater<int>())
#define Cin(a)		    cin>>a
#define GCin(a)		    getline(cin,a)
#define Cin2(a,b)	    cin>>a>>b
#define Cin3(a,b,c)	    cin>>a>>b>>c
#define Cin4(a,b,c,d)	    cin>>a>>b>>c>>d
#define PI 		    3.1415926535897932384626433832795l
#define Ignore		    cin.ignore()

int isprime(ll n){
     ll i;
     if(n==2) return 1;
     if(n%2==0) return 0;
     for(i=3;i<=sqrt(n);i+=2)
         if(n%i==0) return 0;
     return 1;
}

bool cmp(string i,string j){
    return i+j<j+i;
}

string ConvertItoS(ll n){
    SS a; a<<n;
    return a.str();
}

//ll ConvertStoI(string s){
//   return stoi(s);
//}
ll Count(string a){
    ll sum=0;
    ForA(a.size()){
        if(tolower(a[i])=='a')sum+=1;
        if(tolower(a[i])=='b')sum+=2;
        if(tolower(a[i])=='c')sum+=3;
        if(tolower(a[i])=='d')sum+=4;
        if(tolower(a[i])=='e')sum+=5;
        if(tolower(a[i])=='f')sum+=6;
        if(tolower(a[i])=='g')sum+=7;
        if(tolower(a[i])=='h')sum+=8;
        if(tolower(a[i])=='i')sum+=9;
        if(tolower(a[i])=='j')sum+=10;
        if(tolower(a[i])=='k')sum+=11;
        if(tolower(a[i])=='l')sum+=12;
        if(tolower(a[i])=='m')sum+=13;
        if(tolower(a[i])=='n')sum+=14;
        if(tolower(a[i])=='o')sum+=15;
        if(tolower(a[i])=='p')sum+=16;
        if(tolower(a[i])=='q')sum+=17;
        if(tolower(a[i])=='r')sum+=18;
        if(tolower(a[i])=='s')sum+=19;
        if(tolower(a[i])=='t')sum+=20;
        if(tolower(a[i])=='u')sum+=21;
        if(tolower(a[i])=='v')sum+=22;
        if(tolower(a[i])=='w')sum+=23;
        if(tolower(a[i])=='x')sum+=24;
        if(tolower(a[i])=='y')sum+=25;
        if(tolower(a[i])=='z')sum+=26;
    }
    return sum;
}
ll digsum(ll x){
	ll sum=0;
	while(x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
ll dig(ll x){
	ll cnt=0;
	while(x!=0){
		cnt++;
		x/=10;
	}
	return cnt;
}

int main(){
   //freopen("in.txt","r",stdin)
  // freopen("out.txt","w",stdout)
   //cout<<fixed<<setprecision(2);
 //ios_base::sync_with_stdio(0);
 // cin.tie(0);
 //cout.tie(0);

    string s1,s2;
	ll cnt1,cnt2;
//Ignore;

	while(Cin2(s1,s2)){  /// initialy input will: saima shanto

        ll x=Count(s1);
        ll y=Count(s2);
        while(dig(x)!=1){
          x=digsum(x);
        }
        while(dig(y)!=1){
          y=digsum(y);
        }
        cout<<x<<" "<<y; /// Output will: 7 5

	}

    return 0;
}


