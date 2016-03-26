#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    scanf("%d",&m);
    int A[m+1];
    for(int i=0;i<m;i++)
        scanf("%d",&A[i]);
       sort(A,A+m);
    scanf("%d",&n);
    int B[n+2];
    for(int i=0;i<n;i++)
        scanf("%d",&B[i]);
    sort(B,B+n);
    int ans=0;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++){
      if(A[i]==B[j]||(A[i]==(B[j]+1))||(A[i]+1==B[j])){
         ++ans;
            B[j]=-1;
         break;
      }
      }
    }

    cout<<ans<<endl;

    return 0;
}
