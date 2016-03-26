#include<bits/stdc++.h>

using namespace std;

int main()
{
double l,r,k,j,m=1,p=1;
    cin>>l>>r>>k;
   while(p<l)
   {
     p=p*k;
   }

  int q=0;
while(p<=r)
{
    cout<<p<<' ';
    q=1;
    p=p*k;
}

if(q==0)cout<<"-1"<<endl;
return 0;
}
