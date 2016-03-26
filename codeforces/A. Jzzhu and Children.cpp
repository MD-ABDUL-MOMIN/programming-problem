#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,p=0,k,ch[101];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>ch[i];
    for(int i=1;i<=n;i++){
        int l=ch[i];
       ch[i]=ch[i]/m;
        if(l>ch[i]*m)
        ch[i]+=1;

    if(p<=ch[i]){p=ch[i];k=i;}
    }
      cout<<k<<endl;
    return 0;
}
