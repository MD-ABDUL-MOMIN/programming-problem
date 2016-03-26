#include<bits/stdc++.h>
using namespace std;
main()
{   long long a[100010]={0},n,l;
cin>>n;
for(int i=0;i<n;i++){
    cin>>l;
    a[l]++;
}
long long m=0;
for(int j=2;j<=100000;j++){
    m=max((a[j]+a[j-1]),m);
}
cout<<m<<endl;
    return 0;
}
