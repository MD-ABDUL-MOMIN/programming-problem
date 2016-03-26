#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k=0,num[1001],p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>num[i];
    for(i=0;i<n;i++)
    {
        if(p!=1)
            for(j=0;j<n;j++)
            {
            if(j%2==0)
            {
                if(num[j]==(n-1))
                    num[j]=0;
                else ++num[j];
            }
            else
            {
                if(num[j]==0)num[j]=n-1;
                else --num[j];
            }
        }
        if(p!=1)
            for(k=0;k<n;k++)
        {
            if(num[k]==k){
               p=1;}
            else {p=0;break;}

        }
    }
    if(p==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}
