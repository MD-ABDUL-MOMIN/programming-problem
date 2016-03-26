#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k,num[256]={0};
    cin>>n>>m;
    char first[51][51];
    for(i=0;i<n;i++)
    {
    cin>>first[i];
    }
  int sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(first[i][j]=='f'||first[i][j]=='a'||first[i][j]=='c'||first[i][j]=='e')
            {
                for(k=j;k<=j+1;k++)
             {
                 ++num[first[i][k]];
                 ++num[first[i+1][k]];
             }
             if(num['f']>0&&num['a']>0&&num['c']>0&&num['e']>0)++sum;
             num['f']=0;num['a']=0;num['c']=0;num['e']=0;

             }
            }
    }
    cout<<sum<<endl;
    return 0;

}
