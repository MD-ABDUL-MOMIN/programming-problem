#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m;
    set<int>myset;
    for(int i=1;i<=n;i++){
        cin>>a;
        for(int l=1;l<=a;l++){
            cin>>b;
            myset.insert(b);
        }
    }
    (myset.size()==m)?puts("YES\n"):puts("NO\n");
    return 0;
}
