#include<bits/stdc++.h>

using namespace std;
static int m;
int main()
{
    int n,i,j,A[102],ans=0,sig=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d",&A[i]);
    int mark[]={0,0};
    for(i=1;i<n;)
    {  if(A[i]==1){sig=1;}
     if(sig==1){
         int j=i;
        while(sig==1&&A[j]==0&&j<=n)
        {
            ++mark[A[j]];
            ++j;
        }
        if(mark[0]>1)
        {i=j;
        }
        else {++ans;++i;}

        mark[0]=0;
    }
    else i++;
    }
    if(A[n]==1)++ans;
    cout<<ans<<endl;
    return 0;


}
