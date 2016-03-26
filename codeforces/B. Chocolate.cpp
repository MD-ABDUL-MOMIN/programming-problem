#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int ans;
    scanf("%d",&n);
    int v,p=-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        if(v==1)
        {

        if(p==-1)
        {
            ans=1;
        }
        else{

            ans*=(i-p);

        }
        p=i;

        }
    }
    cout<<ans<<endl;
}
