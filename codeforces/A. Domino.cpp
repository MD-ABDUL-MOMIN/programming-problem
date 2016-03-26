#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x,y;
    long long int c1=0,c2=0,d;
    scanf("%d",&n);
    d=n;
    while(n--)
    {
        scanf("%d%d",&x,&y);
        if(x%2!=0||y%2!=0)
        {
            c1+=x;
        c2+=y;
        }


    }
    int ans;
    if(c1%2==0&&c2%2==0)ans=0;
    else if(((c1%2==0&&c2%2==1)||(c1%2==1&&c2%2==0)))
        ans=-1;
    else {
        if(c1!=c2)
         ans=1;
    else ans=-1;
    }
    cout<<ans<<endl;

    return main();


}

