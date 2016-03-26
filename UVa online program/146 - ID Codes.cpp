#include<bits/stdc++.h>

using namespace std;

int main()
{

    string name,ans;

    while(cin>>name&&name[0]!='#'){
            int l=name.size(),pos=l-1,j;
            for(int t=l-1;t>=0;t--)
            {
                for(j=t;j>=0;j--){

                if(name[t]>name[j])
                {
                    pos=j;

                   swap(name[t],name[pos]);
                    cout<<name<<endl;
                    goto XX;

                }

                }
                    swap(name[t],name[j]);
            }



  //  sort(name.rbegin(),name.rend());abcdd

        cout<<"No Successor"<<endl;
        XX:continue;

    }
    return 0;
}
