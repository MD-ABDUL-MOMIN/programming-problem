#include<bits/stdc++.h>

using namespace std;
long long int N[100003];

int main()
{
    long long int n,i,m,Min,Max,ans=0,ans1=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        if(i==1)
        {
            Min=m;
            Max=m;
        }
        if(Min>m)Min=m;
        if(Max<m)Max=m;
        ++N[m];
    }
    cout<<Max<<' '<<Min<<endl;

    while(Min!=(Max-1))
    {

          ans+=N[Min];
        ans1+=N[Max];
        ++Min;
        --Max;

    }
    cout<<ans<<' '<<ans1<<endl;

    return 0;

}
