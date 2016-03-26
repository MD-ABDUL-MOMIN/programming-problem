#include<iostream>

using namespace std;

int main()
{
    int n,m,t,q=0;
    cin>>t;
    cout<<'\n';
    while(t-->0)
    {
        int i,j,k,p=1;
        cin>>n;
        cin>>m;
        for(k=1;k<=m;k++){
                p=1;
        int q=0;
        for(i=1;i<=(2*n-1);i++)
        {
            for(j=1;j<=p;j++)
            {
                cout<<p;
            }
            if(p>=n||q==1){--p;q=1;}
            else {++p;q=0;}
            cout<<'\n';
        }
        cout<<'\n';

      }

    }
return 0;
}
