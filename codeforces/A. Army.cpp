#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b,c,sum=0;
    vector<int>N;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&c);
        N.push_back(c);

    }
    scanf("%d%d",&a,&b);
    for(int i=a-1;i<(b-1);i++)
    sum+=N[i];
    cout<<sum<<endl;

return 0;


}
