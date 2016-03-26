#include<stdio.h>
long long int cycle(long long int c);
long long int length(long long int F,long long int Q);
long long int p=0,d=0,M=0,E,R;
int main()
{ long long int a=0,b=0,p=0,M=0,J=0,K=0,q;
    while(scanf("%lld%lld",&J,&K)==2)
    {M=0;p=0;

    long long int M=0;
    if(J>K){a=K;b=J;}
    else {a=J;b=K;}
    M=length(a,b);
    printf("%lld %lld %lld\n",J,K,M);
    }
    return 0;
}
long long int length(long long int F,long long int Q)
{
   long long int l=0;
   l=cycle(Q);
   if(p<l)p=l;
   R=p;
   Q=Q-1;
   if(Q>=F)return length(F,Q);
   else {d=0;p=0;return R;}
}
long long int cycle(long long int c)
{++d;
E=d;
    if(c==1){d=0;return E;}
    else if(c%2==0){return cycle(c/2);}
    else {return cycle(3*c+1); }
}
