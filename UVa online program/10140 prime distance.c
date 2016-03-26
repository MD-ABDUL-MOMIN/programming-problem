#include<stdio.h>
#include<math.h>
#define PI 1000
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        long long int i,j,arr[PI],L,arr1[PI],M;
        for(i=a;i<=b;i++)arr[i]=1;
        L=sqrt(b);
        for(i=2;i<=L;i++)
        {  M=a/i;
           for(j=M;(i*j)<=b;j++)
            arr[i*j]=0;
        }
        j=0;int k=0;
        for(i=a;i<=b;i++){
            if(arr[i]==1){arr1[j]=i;++j;++k;}
        }
        if(k>1)printf("%lld,%lld are closest, %lld,%lld are most distant.\n",arr1[0],arr1[1],arr1[j-2],arr1[j-1]);
        else printf("There are no adjacent primes.\n");


    }
    return 0;
}
