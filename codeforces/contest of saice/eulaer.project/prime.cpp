#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int mark[1000000001];
long long int prime[1000010];
int main()
{
    for(int i=2;i<=1000000000;i+=2){if(i!=2)mark[i]=1;}
    int l=1,n;
    cin>>n;
    mark[2]=0;
    prime[l]=2;
    for(int j=3;j<=sqrt(1000000000);j+=2)
    {  if(mark[j]==0)
       {
           prime[++l]=j;
           if(l==n){cout<<prime[l]<<endl;break;}
        for(int k=j*j;k<=100000000;k+=j)
            mark[k]=1;
       }
    }

   // for(int i=0;i<l;i++)
    //{
       // cout<<prime[i]<<' ' <<i+1<<endl;

   // }
    return 0;
}
