#include<bits/stdc++.h>

using namespace std;

double distance(long long int a,long long int b,long long int a1,long long int b1)
{
    double result;
    result=sqrt((a-a1*1.00)*(a-a1)+(b-b1)*(b-b1)*1.00);
    return result;
}

int main()
{
    int n,Car_v,S_v,ans;
    vector<long long int >x;
    vector<long long int>::iterator k;
    long long int p,X,Y,z,M=1000002;

    scanf("%d%d%d",&n,&Car_v,&S_v);
    for(int i=1;i<=n;i++){
        scanf("%lld",&p);
        x.push_back(p);
    }
    scanf("%lld%lld",&X,&Y);
    double t1,t2;
    for(size_t t=1;t<x.size();t++)
    {
        t1=distance(X,Y,x[t],0)/S_v;
        if(t!=x.size()-1)
            t2=distance(X,Y,x[t+1],0)/S_v+distance(x[t],0,x[t+1],0)/Car_v;
        else t2=t1;
        if(t1<t2){
            ans=t+1;
            break;
            }
            else if(t1==t2)ans=t+1;

    }


    cout<<ans<<endl;
    x.clear();

    return 0;

}
