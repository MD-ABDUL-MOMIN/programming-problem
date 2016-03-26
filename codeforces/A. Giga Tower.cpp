#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N,ans=0,tem,p;
    scanf("%lld",&N);
    p=N;
    if(N<0)
    {
            tem=++N;


          while((tem<0||tem>0)||N==0)
        {
          int rem=tem%10;
          if(rem==-8||rem==8){++ans;break;}
          tem=tem/10;
          if(tem==0){++ans;N=N+1;tem=N;}
        }

    }
    else {
        ++N;
        tem=N;

          while(tem>0)
        {
          int rem=tem%10;
          if(rem==8) {++ans;break;}
          tem=tem/10;
          if(tem==0){++N;tem=N;++ans;}
        }

    }
    if(p<=0&&N>0) ans=(p*-1+N);
    else if(p<0&&N<0)ans=(-1*p-N*-1);
    else ans=N-p;
  cout<<ans<<endl;
    return 0;
}
