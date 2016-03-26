#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    long long int num,ans=0,lucky=0;
    scanf("%d%d",&n,&k);
    //for(int i=1;i<=k;i++)
    //{
       // lucky=(lucky*10+7);
    //}

    for(int i=1;i<=n;i++)
    {int p=0;
        scanf("%lld",&num);
        while(num>0)
        {
            int rem=num%10;
            if(rem==4||rem==7)++p;
            num=num/10;
        }
          if(p<=k)
          ++ans;
    }
    cout<<ans<<endl;

    return 0;
}
