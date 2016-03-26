#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,sum=0,total,ans,i;
    scanf("%d%d",&n,&m);
    total=m%((n*(n+1))/2);
    //cout<<total<<endl;
    {for( i=1;i<=n;i++)
    {
        total=total-i;
        if(total<=0)
        {
            if(total<0)
            ans=total+i;
            else ans=total;
            break;
        }

    }
    }

    cout<<ans<<endl;

    return 0;

}
