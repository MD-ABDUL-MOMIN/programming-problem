#include<bits/stdc++.h>

using namespace std;
int gcd(long long int a,long long int b)
{
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    long long int n,t,ans=0,i=1,j;
    for(scanf("%lld",&t);i<=t&&scanf("%lld",&n);printf("%lld\n",ans),i++)
    { ans=1;
       int N[1000003]={0};
        for(j=2;j<=n;j++){
                if(n%j==0&&N[j]!=1)
                { N[j]=1;
                    int d;
                    d=j*j;
                    while(d<=n)
                    {

                        N[d]=1;
                        d=d+j;

                    }
                    N[n]=1;

                }
                if(N[j]==0){++ans;//cout<<' '<<j<<endl;
                }

        }
    }

    return 0;

}
