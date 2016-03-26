#include<stdio.h>
#include<math.h>
int prime[20000];
int main()
{
    long long int i,j,k=0,num,N,M;
    for(i=3;i<=2000;i+=2)prime[i]=0;
    for(i=4;i<=2000;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(2000);i+=2)
    {
        if(prime[i]==0)
            {
            for(j=i*i;j<=20000000;j+=i+i)
             {
                prime[j]=1;
             }

            }
        }
        for(i=2;i<=2000000;i++)
        {
         if(prime[i]==0)
            printf("%d",&i);
         }

    return 0;
}
