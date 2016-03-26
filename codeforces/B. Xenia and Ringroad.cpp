#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,A[100002],i,j,sum=0;
   cin>>n>>m;
    for(i=0;i<m;i++)
        scanf("%I64d",&A[i]);

      for(i=0;i<m;i++){

        if(i==0)sum+=(A[i]-1);
        else {
            if(A[i]>=A[i-1])
                sum+=(A[i]-A[i-1]);
            else sum+=(n-A[i-1]+A[i]);
        }
    }

printf("%I64d\n",sum);

    return 0;
}
