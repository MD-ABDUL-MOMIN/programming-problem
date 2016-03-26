#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,same,diff,m,n;
    cin>>a>>b;
    if(a>b){        same=b;m=a-b;}

    else {same=a;m=b-a;}
     diff=m/2;
     cout<<same<<' '<<diff<<endl;


    return 0;
}
