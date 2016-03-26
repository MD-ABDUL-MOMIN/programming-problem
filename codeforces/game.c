#include<stdio.h>
int check(int n1,int n2,int k1,int k2,int sum,int sum1);
int main()
{
    int n1,n2,k1,k2,N,sum1,sum;
    scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
    sum=n1;sum1=n2;
    N=check(n1,n2,k1,k2,sum,sum1);
    if(N==0)printf("First\n");
    else printf("Second\n");
    return 0;
}
int check(int n1,int n2,int k1,int k2,int sum,int sum1)
{
    sum-=n1-k1;
    sum1-=n2-k2;
    if(sum==0)return 0;
    if(sum1==0)return 1;
    return check(n2,n1,k1,k2,sum,sum1);
}
