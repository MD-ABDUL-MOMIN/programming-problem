#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int A[998006];
long long int rev(long long int N)
{
    long long int sum=0;
    while(N!=0)
    {
        int rem=N%10;
        sum=sum*10+rem;
        N=N/10;
    }
    return sum;
}
int main()
{
    int i=999,j=100,p=0;

    for(int k=i;k>=100;k--)
    {
        for(int l=i;l>=100;l--)
        {
           A[p++]=k*l;

        }
    }
   sort(A,A+p);
    //long long int F;
    //scanf("%lld",F);
   for(int i=p-1;A[i];i-=2){
      // cout<<A[i]<<endl;
           if(A[i]==rev(A[i]))
           {
               cout<<A[i]<<endl;
            break;
           }
       }



//
   // }
    return 0;
}
