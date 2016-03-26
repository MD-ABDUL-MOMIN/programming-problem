#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mm[300010]={0};

main()
{   ll n,m,lo,hi,mid,l;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>mm[i];

    }
    sort(mm+1,mm+n+1);

    for(int j=1;j<=m;j++){
            cin>>l;
         lo=1;hi=n;
            ll best_so_far=0;
            while(lo<=hi) {
                mid = (hi+lo)/2;
                if (mm[mid]<=l) {
                    best_so_far=mid;
                    lo=mid+1;
                }
                else hi=mid-1;
            }

            if(j!=1) cout<<" ";
            if(l>mm[n]) cout<<n;
            else cout<<best_so_far;
    }
    cout<<endl;

    return 0;
}
