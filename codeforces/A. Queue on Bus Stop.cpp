#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,D,k,ans=0,j,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
       scanf("%d",&D);

       if(i!=0)
       {
           if((sum+D)>m)
            sum=D;
           else {sum+=D;++ans;}
       }
       else{
          sum+=D;}

    }


    cout<<n-ans<<endl;



}
