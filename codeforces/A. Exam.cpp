#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,j=1,ans,l,p=0;
     scanf("%d",&n);
     if(n%2!=0&&n!=1)ans=n-1;
     else if(n==2)ans=1;
     else ans=n;

     cout<<ans<<endl;
     if(ans==1)
        cout<<ans<<endl;
     l=ans/2;
     //if(l==1)++ans;
     if(l==1) p=1;
     int c=0;

     for(int i=0;i<l;i++){
        printf("%d %d ",i+1,i+1+p+(ans/2));
        c=1;
     }
     if(c==1)
        printf("\n");


    return 0;

}
