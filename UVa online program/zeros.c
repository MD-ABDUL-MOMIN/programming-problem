#include<stdio.h>
long long fact(long long int a);
long long f1(long long int B);
long long f2(long long int C);
int number (long long int P,int q);
int main()
{
    long long int n,X;
    int b,r;
    while(scanf("%lld%d",&n,&b)==2&&(n!=0&&b!=0))
    {X=f1(n);
   // printf("%lld\n",X);
        r=number(X,b);
       printf("%d\n",r);

    }
    return 0;
}
long long int f2(long long int C)
{

return f1(C)*f2(f1(C-1));
}
long long int f1(long long int B)
{ if(B==1||B==0)return 1;
else
return fact(B)*f1(fact(B-1));
}
long long int fact(long long int a)
{ if(a==1||a==0)return 1;
    return a*fact(a-1);
    }
int number(long long int P,int q)
{
    int rem,l=0;
    while(P!=0)
    {
        rem=P%q;
        if(rem==0)++l;
        P=P/q;
    }
    return l;
}

