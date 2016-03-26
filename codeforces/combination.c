#include<stdio.h>

int gcd(int a,int b);
int main()
{
    int a,b,N[100000],c,i,j,k;
    char d;
    long long int n,r;
    scanf("%lld%c%lld",&n,&c,&r);
    for(i=0;i<r;i++){
        N[i]=n;
        n--;

        }
        i=2;
        while(i<=r)
        {   k=i;
            for(j=0;j<r;j++)
            {

                if(N[j]!=1){
                        c=gcd(N[j],k);
                N[j]=N[j]/c;
                k=k/c;

                if(k==1)break;
            }
            }
            ++i;
        }
        long long int  sum=1;
   for(i=0;i<r;i++){sum*=N[i];}
    printf("%lld",sum);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
