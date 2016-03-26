#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,t;
    long long int N[3002];
    pair<int,int>ans[3002];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&N[i]);
    }
    int k=0;
    for(int i=0;i<n;i++)
    {

            t=i;
        for( j=i;j<n;j++)
            if(N[t]>N[j])
                t=j;
            if(i!=t){
           ans[k].first=i;
           ans[k].second=t;
           ++k;
           swap(N[i],N[t]);
            }



    }
    cout<<k<<endl;
    for(i=0;i<k;i++)

        cout<<ans[i].first<<' '<<ans[i].second<<endl;


    return 0;
}
