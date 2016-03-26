#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,mid,ans=0,c;
    scanf("%lld%lld",&a,&b);
    if(a>=b)ans=a-b;
    else{

        if(b%2==1) mid=(b+1)/2;
        else mid=b/2;
        c=a;
        if(a>mid)
        {

            ans+=(a-mid)+1;
             if(b%2==1)++ans;
        }
        else {  ans=0;
                   // b=b*2;
                while(b>c)
                {
                    if(b%2==0){b=b/2;++ans;}
                    else {
                        b=b/2+1;ans+=2;
                    }
                  // cout<<b<<' '<<ans<<endl;
                }
           if(b!=c) ans+=(c-b);
        }




    }
    cout<<ans<<endl;

    return 0;
}
