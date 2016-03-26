#include<stdio.h>
int Check(long long int M);
int main(){
    long long int i=1,b=1,temp,j,rem,sum=0,n;
    scanf("%lld",&n);
    while(b)
    {
        i=Check(b);
        if(i==1)//printf("\n%lld\n",b);
        sum+=i;
      b++;
         if(sum==n)break;
    }
    printf("%lld\n",b-1);
    return 0;
}
int Check(long long int M)
{   int k,rem,temp=0;
    k=M;
    while(M>0)
    {
        rem=M%10;
        temp=temp*10+rem;
        M=M/10;
    }
    if(temp==k)return 1;
    else return 0;

}
