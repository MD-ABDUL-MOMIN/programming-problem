#include<bits/stdc++.h>

using namespace std;
int gcd(int n,int r)
{
    if(r==0)return n;
    return gcd(r,n%r);
}
int main()
{
    int M,N;
    while(scanf("%d%d",&N,&M)==2&&N!=0&&M!=0)
    {
        int A[101],B[101],R,tem;

    tem=N;
    for(int i=0;i<(tem-M);i++)
        A[i]=N--;
   // for(int i=0;i<(tem-M);i++)
    //    printf("%3d",A[i]);
    R=tem-M;
int l=1;
    for(int j=0;j<(tem-M);j++)
        B[j]=l++;
        // for(int j=0;j<(tem-M);j++)
       //printf("%5d",B[j]);
        for(int i=0;i<(tem-M);i++)
        {

                for(int j=0;j<tem-M;j++)
                { int m=A[i];
                    A[i]=A[i]/gcd(A[i],B[j]);
                    B[j]=B[j]/gcd(m,B[j]);
                }

        }
        long long int sum=1;
        for(int j=0;j<tem-M;j++)
            sum*=A[j];
       printf("%d things taken %d at a time is %lld exactly.\n",tem,M,sum);
    }
        return 0;

}
