#include<bits/stdc++.h>
using namespace std;

unsigned long int N=0;
int mark[1000001];
unsigned long long int  number(unsigned long long int n)
{
  ++N;
  if(n<1000000)
  mark[n]=1;
    if(n==1)return N;
    if(n%2==0) return number(n/2);
    else return number(3*n+1);
}/*
unsigned long long int M=0;
unsigned long long int maximum(long long int m,long long int n)
{  N=0;
if(mark[m]==0)
{

unsigned long long int ans1=number(m);
    if(M<ans1)M=ans1;
}

    if(m==n)return M;
    else return maximum(--m,n);
}

int main()
{
  long long int i,j,k;
  unsigned long long int ans=0,Ml;
    scanf("%lld%lld",&i,&j);

   ans=maximum(j,i);

    printf("%lld %lld %llu\n",i,j,ans);
    M=0;
    return main();
}
*/
int main()
{

    unsigned long long int i,j,k,L;
     unsigned long long int ans=0;
    scanf("%llu%llu",&i,&j);

    for(k=j;k>=i;k--)
    {
        if(mark[k]==0)
        {
            L=number(k);
            ans<L?ans=L:ans;
            N=0;
            mark[k]=1;
        }



    }
    printf("%llu %llu %llu\n",i,j,ans);

    return 0;
}
