#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,R[12]={0},C[12]={0},n[12][12]={0};
    cin>>r>>c;
    char ch[12][12];
    getchar();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;)
        {
            ch[i][j]=getchar();
            if(ch[i][j]=='S')
            {
                //cout<<i<<' '<<j<<endl;

                R[i]=1;
                C[j]=1;

            }

 j++;
        }
        getchar();

    }
    int ans=0,l=0;
    for(int i=0;i<r;i++)
    {
        if(R[i]!=1){
        ans+=c;
        //cout<<i<<' '<<ans<<endl;
        ++l;}

    }
    for(int i=0;i<c;i++)
    {
        if(C[i]!=1)
        ans+=(r-l);

    }
    cout<<ans<<endl;

    return 0;

}
