#include<stdio.h>
int digit(int n,int a);
int main()
{
    int n,i,j,T,L,M;
    scanf("%d",&T);
    for(L=0;L<T;L++)
    {
       scanf("%d",&n);
       for(i=0;i<=9;i++)
       {
           M=digit(n,i);
           if(i==9)printf("%d\n",M);
           else printf("%d ",M);
       }



    }
    return 0;
}
int K=0;
int digit(int n,int a)
{
    int j,k,l;
    k=n;
    while(k>0)
    {
        j=k%10;
        if(j==a)++K;
        k=k/10;
    }
    l=K;
    if(n==1) {K=0;return l;}
    return digit(n-1,a);
}

