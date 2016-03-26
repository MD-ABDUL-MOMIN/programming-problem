#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        long long int N,i=1,tem;
        scanf("%lld",&N);
        tem=N;
        if(N%2==1)
            printf("Case %d: Impossible\n",t);
        else{

            while(N%2!=1)
            {
                i=i*2;
              N=N/2;
            }
                printf("Case %d: %lld %lld\n",t,N,i);

        }
        t++;
    }
    return 0;
}
