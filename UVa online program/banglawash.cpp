#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i=1,j;

    cin>>n;
    while(i<=n)
    { string name;
        int t;
        cin>>t;
       int ch[256];
       ch['T']=0;
       ch['A']=0;
       ch['W']=0;
       ch['B']=0;
        cin>>name;
        for(j=0;j<name.size();j++)
        {
            ++ch[name[j]];
        }
        if((ch['B']>ch['W'])&&ch['W']==0&&ch['T']==0)
            cout<<"Case "<<i<<':'<<"BANGLAWASH"<<endl;
        else if((ch['W']>ch['B'])&&ch['B']==0&&ch['T']==0)
            cout<<"Case "<<i<<':'<<"WHITEWASH"<<endl;
        else if((ch['W']>ch['B']&&ch['B']!=0)&&((ch['W']>ch['B']&&ch['B']!=0)ch['T']!=0)
            cout<<"Case "<<i<<':'<<"WWW "<<ch['W']<<'-'<<ch['B']<<endl;
        else if((ch['B']>ch['W'])&&ch['W']!=0)
            cout<<"Case "<<i<<':'<<i<<"BANGLADESH "<<ch['B']<<'-'<<ch['W']<<endl;
       else if(t==ch['A'])cout<<"Case "<<i<<':'<<"ABANDONED"<<endl;
        else if (ch['W']==ch['B']&&ch['B']==0)cout<<"Case "<<i<<':'<<"DRAW "<<ch['B']<<' '<<ch['T']<<endl;

   i++;

    }
    return 0;
}
