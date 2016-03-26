#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=1;
    string number;
    scanf("%d",&n);
    getchar();
    cin>>number;
    for(int i=0;i<n;i++)
    {
         if(number[0]=='0'){ans=1;break;}
         if(number[i]=='1')++ans;
         else {break;}

    }
    if(ans<=n)cout<<ans<<endl;
    else cout<<n<<endl;
    return 0;

}
