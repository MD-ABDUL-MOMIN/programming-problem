#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,M,D,temp;
    while(scanf("%lld",&N)==1&&N!=0)
    {
        M=sqrt(N);
        temp=N-M*M;
        if(temp==0)
        {if(M%2==0)
        printf("%lld %lld\n",M,temp+1);
            else printf("%lld %lld\n",temp+1,M);

        }
        else
        {
            if((M+1)%2==0)
            {
            if(temp<=M+1)printf("%lld %lld\n",temp,M+1);
                else printf("%lld %lld\n",M+1,2*(M+1)-temp);
        }
        else {
            if(temp<=M+1)printf("%lld %lld\n",M+1,temp);
             else printf("%lld %lld\n",2*(M+1)-temp,M+1);
        }
    }
}
return 0;
}
