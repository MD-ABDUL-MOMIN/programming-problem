#include<stdio.h>
long long int team(long int a,long int b);
//long long count;
int main()
{
    long long int n,m,R,T,sum;
    scanf("%lld%lld",&n,&m);
    if(n>m){T=n;R=m;}
    else {T=m;R=n;}
    sum=team(R,T);
    printf("%lld\n",sum);
    return 0;
}
long long int count=0;
long long int team(long int a,long int b)
{if(a>0&&b>1){a=a-1;
    b=b-2;
    ++count;
if(a>b){count;return team(b,a);}
    else {count;return team(a,b);}
}
else return count;
}

