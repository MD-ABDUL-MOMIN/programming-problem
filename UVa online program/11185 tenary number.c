#include<stdio.h>
int main()
{
    long long int N,mod,A[100];
    while(scanf("%lld",&N)==1&&N>=0)
    {int i=0,j,l;
if(N==0)printf("0");
    else{
   while(N!=0)
   {
       A[i]=N%3;
       N=N/3;
       i++;
   }
    for(j=i-1;j>=0;j--)
    printf("%d",A[j]);
    }
    printf("\n");
    }
    return 0;
}
