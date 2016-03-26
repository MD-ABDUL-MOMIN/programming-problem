#include<iostream>
using namespace std;

int main()
{
    int n,i,j=1;
    while(cin>>n)
    {
        int num[55],total=0,avg,brick=0;
        if(n==0)break;
        for(i=0;i<n;i++){
            cin>>num[i];
            total+=num[i];
        }
        avg=total/n;
        for(i=0;i<n;i++)
        {
            if(num[i]>avg){brick+=(num[i]-avg);}
        }
        cout<<"Set #"<<j<<endl;
        cout<<"The minimum number of moves is "<<brick<<'.'<<endl;
        cout<<'\n';
        ++j;
    }
    return 0;
}
