#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int divisor(long long int n)
{
    long long int sum=1,j=2;
    if(n==1)return 0;
    int l=sqrt(n+1);
    while(j<=l)
    {
        if(n%j==0)
        {
            if(j!=n/j)
                sum+=j;
            sum+=n/j;
            if(sum>n)return 2;

        }
        j++;
    }
    if(sum==n)return 1;
    if(sum<n)return 0;
}
int main()
{
    long long int n,j=0,k=2,l,A[101];
    while(k<100){scanf("%lld",&n);A[j++]=n;if(n==0)break;k++;}
    for(int i=0;i<j;i++)
    {
      int ans=divisor(A[i]);
      if(i==0)
        printf("PERFECTION OUTPUT\n");
        if(A[i]==0){printf("END OF OUTPUT\n");break;}
          if(ans==0)
            printf("%5lld  DEFICIENT\n",A[i]);
        else if(ans==1)printf("%5lld  PERFECT\n",A[i]);
        else printf("%5lld  ABUNDANT\n",A[i]);

    }
    return 0;
}

