#include<bits/stdc++.h>


using namespace std;
#define Mod 10000007

int main()
{
    long long int n,a,b,c,d,e,f,T,t=1,i;
    scanf("%lld",&T);

    while(t<=T)
    {
        i=6;
     scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&n);
    long long int Value[10002];
    Value[0]=a%Mod;
    Value[1]=b%Mod;
    Value[2]=c%Mod;
    Value[3]=d%Mod;
    Value[4]=e%Mod;
    Value[5]=f%Mod;


     while(i<=n)
     {
         Value[i]=(Value[i-1]+Value[i-2]+Value[i-3]+Value[i-4]+Value[i-5]+Value[i-6])%Mod;
         i++;
     }

        printf("Case %lld: %lld\n",t,Value[n]);
        t++;

    }


 return 0;

}
