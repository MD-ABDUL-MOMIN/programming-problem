#include<stdio.h>
#include<math.h>
int is_prime(long long int N);
int main()
{
    long long int n,i,j=0;
    while(scanf("%lld",&n)==1&&n!=0)
    {

            for(i=1;i<=(n/2);i+=2)
        {
            if(is_prime(i)==1&&is_prime(n-i)==1){
                printf("%lld = %lld + %lld\n",n,i,(n-i));j=1;break;
            }
        }
        if(j==0)printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
int is_prime(long long int N)
{
long long int i,L,k=1;
L=sqrt(N);
if(N<2)k=0;
else if(N==2)k=1;
   else{ for(i=2;i<=L;i++)
    if(N%i==0){k=0;break;}
    else {k=1;}
   }
    return k;
}
