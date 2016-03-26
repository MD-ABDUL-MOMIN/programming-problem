#include<bits/stdc++.h>
using namespace std;
long long int check[2][100005];
int main()
{
   long long int v,p;
    int n,s;
    char c;
    scanf("%d%d",&n,&s);
    getchar();
    for(int i=0;i<n;i++)
    {

        scanf("%c%lld%lld",&c,&v,&p);
        if(c=='S')check[0][v]+=p;
        else check[1][v]+=p;
        getchar();
    }
    int j=0,d=0;
    while(j<100000&&d<s)
    {
        if(check[0][j]>0)
        {
            ++d;
        }
        ++j;
    }
for(int i=j;i>=0;i--)
{
    if(check[0][i]>0)
    {
      cout<<'S'<<' '<<i<<' '<<check[0][i]<<endl;

    }
}
 j=0;
for(int i=100000;j<s&&i>=0;i--)
{
    if(check[1][i]>0)
    {  ++j;
        cout<<'B'<<' '<<i<<' '<<check[1][i]<<endl;

    }
}
return 0;
}
