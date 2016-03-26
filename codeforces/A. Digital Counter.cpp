#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=1,rem,ans=1;
    scanf("%d",&n);
    int num[]={2,7,2,3,3,4,2,5,1,2};

    while(i<=2)
    {
        ans*=num[n%10];
        n=n/10;
        i++;
    }

    cout<<ans<<endl;
    return 0;
}
