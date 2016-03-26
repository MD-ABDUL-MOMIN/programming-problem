#include<iostream>
using namespace std;

int main()
{
    int x1,x2,y1,y2,d1,d2,ans;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==0&&y1==0&&x2==0&&y2==0)
            break;
        d1=x1>x2?x1-x2:x2-x1;
        d2=y1>y2?y1-y2:y2-y1;
        if((d1==d2&&d1!=0)||((d1==0&&d2!=0)||(d2==0&&d1!=0)))
            ans=1;
        else if(d1==0&&d2==0)ans=0;
        else ans=2;
        cout<<ans<<endl;
    }
    return 0;
}
