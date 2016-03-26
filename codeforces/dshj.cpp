#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int A,a,B,b,C,c,aa=0,bb=0,cc=0;
    scanf("%lld%lld%lld",&A,&B,&C);
    scanf("%lld%lld%lld",&a,&b,&c);
    if(A>=a){aa=(A-a)/2;}
    else aa=A-a;
    if(B>=b){bb=(B-b)/2;}
    else bb=B-b;
     if(C>=c){cc=(C-c)/2;}
    else cc=C-c;
    if((aa+bb+cc)>=0)
        printf("Yes\n");
    else printf("No\n");

    return 0;


}
