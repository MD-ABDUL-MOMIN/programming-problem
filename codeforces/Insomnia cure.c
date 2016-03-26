#include<stdio.h>
long number(int a,int b,int c,int d,long long int e);
int main()
{
    int k,l,m,n;
    long long int i,d,damaged;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%lld",&d);
    damaged=number(k,l,m,n,d);
    printf("%lld",damaged);
    return 0;

}
long long int sum=0;
long number(int a,int b,int c,int d,long long int e)
{
    if(e%a==0||e%b==0||e%c==0||e%d==0){++sum;}
        if(e>1)return number(a,b,c,d,e-1);
        else {
            return sum;
        }

}
