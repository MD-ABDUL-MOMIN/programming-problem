#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>ch;
    int n,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&j);
        ch.insert(j);
    }
    cout<<ch.size()<<endl;
    ch.erase(ch.begin(),ch.end());
    cout<<ch.size()<<endl;

    return 0;

}
