#include<bits/stdc++.h>

using namespace std;
#define ll long long int
bool check[100004];
int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        ll n,u,v,l=1,a=0,b=0;
        scanf("%lld",&n);
        while(l<=n)
        {
            scanf("%lld%lld",&u,&v);
            if(u>v)
                swap(u,v);
            if(check[u]==false){++a;check[u]=true;}
            if(check[v]==false){++b;check[v]=true;}


            l++;
        }
        cout<<"Case "<<i<<": "<<max(a,b)<<endl;
        i++;
    }
    return 0;
}
