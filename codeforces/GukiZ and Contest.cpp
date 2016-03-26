#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,num[2001];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>num[i];
        for(i=1;i<=n;i++)
      {k=1;
          for(j=1;j<=n;j++)
              if(num[i]<num[j])k++;
              cout<<k<<" ";

          }
          cout<<endl;

        return 0;
}
