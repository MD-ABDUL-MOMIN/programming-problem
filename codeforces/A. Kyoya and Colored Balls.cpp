#include<iostream>
#include<stdio.h>
using namespace std;
#define M 1000000007
int dp[1010][1010];
int main()
{
    for(int i=0;i<1010;i++)
    {
        dp[0][i]=1;
    }
    for(int i=1;i<1010;i++)
    {
        for(int j=1;j<1010;j++)
        {
            dp[i][j]=(dp[i-1][j-1]+dp[i][j-1])%M;
        }

    }
    int n,m,sum=0;
    long long int ans=1;
    cin>>n;
    while(n-->0)
    {
        cin>>m;
        sum+=m;
        ans=(ans*dp[m-1][sum-1])%M;
    }
    cout<<ans<<endl;
    return 0;

}

