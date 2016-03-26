#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define f(a,i,b) for(a=i;a<=b;a++)
int fun(int n,int x)
{
    int ans=0;
    while(n>=x)
    {
        n=n-x;
        ++ans;

    }
    if(n!=0)++ans;

    return ans;
}
int main()
{
    int A[1001]={0},B[1001]={0};
    int n,x,i,a,ans=0,N,sum=0;
    scanf("%d%d",&n,&x);
    f(a,1,n)
    {
        scanf("%d",&N);
        sum+=N;
    }
    ans=fun(abs(sum),x);
    cout<<ans<<endl;

    return 0;


}
