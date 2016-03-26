#include<stdio.h>

int main()
{
    long long int b,a,c;
    scanf("%lld%lld",&a,&b);
    long long int Prime[100000],isprime[100000],limit,I=0,j,i;
    limit=sqrt(b*1.00);
   isprime[1]=1;
   for(i=4;i<=b;i+=2)
    isprime[i]=1;
    Prime[I++]=2;
    for(i=3;i<=b;i+=2)
    {
        if(!isprime[i])
        {

                Prime[I++]=i;
                if(i<=limit)
                {
                for(j=i*i;j<=b;j+=i*2)
                {
                    isprime[j]=1;
                }
        }
    }
    }
       for(i=0;Prime[i];i++)
        if(Prime[i]>=a&&Prime[i]<=b)printf("%lld ",Prime[i]);
 return 0;
}
