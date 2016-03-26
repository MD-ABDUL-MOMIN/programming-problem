#include<bits/stdc++.h>



using namespace std;

int main()
{
    int a[1001],b[1001],n,i,A=0,B=0,C=0,D=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);

    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        A=0,B=0,C=0,D=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[j]>a[i]&&b[j]==b[i])++A;
                if(a[j]<a[i]&&b[j]==b[i])++B;
                if(a[j]==a[i]&&b[j]<b[i])++C;
                if(a[j]==a[i]&&b[j]>b[i])++D;
            }
        }
       if(A>0&&B>0&&C>0&&D>0)++ans;

    }

    cout<<ans<<endl;

    return 0;
}
