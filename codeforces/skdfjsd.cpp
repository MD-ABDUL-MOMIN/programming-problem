#include<bits/stdc++.h>

using namespace std;
int mark[101];
int main()
{
    int n,k,i,j,ans=0,A[101];
    scanf("%d%d",&n,&k);
    int p=0;

    for(i=1;i<=n;i++)
    {

        scanf("%d",&A[i]);
        ++mark[A[i]];
       // if(p<=mark[A[i]])p=mark[A[i]];
    }
    int l=n/k;
   for(i=1;i<=k;i++)
   {
       if(mark[i]>l)ans+=(mark[i]-l);
   }
    cout<<ans<<endl;
    return 0;



}

