#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=1,n,m,t;
    scanf("%d",&t);


    while(i<=t)
    {
        scanf("%d%d",&n,&m);
        cout<<(n/3)*(m/3)<<endl;
        i++;
    }
    return 0;
}
