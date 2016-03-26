#include<iostream>
using namespace std;
int main()
{

    int n,x1[101],x2[101],y1[101],y2[101],i,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=(x2[i]-x1[i]+1)*(y2[i]-y1[i]+1);
    }
    cout<<sum<<endl;
    return 0;
}
