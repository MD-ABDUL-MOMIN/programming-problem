#include<stdio.h>
#include<math.h>

int main()
{
    long long int x,n,i,ans=0;
    scanf("%lld%lld",&x,&n);


    if(x*x>=n)
    {
     for(i=1;i<=sqrt(n);i++)
     {
         if(i*x>=n)
         {
             if(n%i==0)ans+=2;
         }
     }
     if(sqrt(n)*sqrt(n)==n)--ans;


    }
    else ans=0;

    printf("%lld\n",ans);
    return 0;

}
