#include<bits/stdc++.h>

using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        double R,ans;
        int n;
        cin>>R>>n;
        ans=(R*sin(PI/n))/(1+sin(PI/n));
        printf("Case %d: %.10lf\n",t,ans);
        t++;

    }
    return 0;
}
