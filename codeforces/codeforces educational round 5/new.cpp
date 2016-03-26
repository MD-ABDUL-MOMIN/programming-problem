#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long int l,r,k,f;
    cin>>l>>r>>k;
    unsigned  long int a;
    a=l;
    f=1;
   // while(f<l)f=f*k;
    int i=0;
 if(f==l){cout<<l<<endl;i=1;}
    while(f*k<=r)
    {
        //cout<<f<<' '<<r<<endl;
        if(f*k>=l&&f*k<=r)
        cout<<f*k<<' ';
      i=1;

        f=f*k;
    }

   if(i==0)
    cout<<"-1"<<endl;

    return 0;
}
