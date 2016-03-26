#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,ans=0;
    scanf("%d%d",&i,&j);
    for(int k=i;k<=sqrt(j);k++)
    {
        int tem=k*k;
        if(tem<=j)
            ++ans;

    }
    cout<<ans<<endl;
    return 0;
}
