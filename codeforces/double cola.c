#include<stdio.h>
int main()
{
    long long int N,i=5,sum=0,j=1,temp,k;
    scanf("%lld",&N);
     sum=5;
    while(sum<N&&(sum+i*2)<=N)
    {
        i=i*2;
        sum+=i;
    }
    if(N>5)
    temp=N-sum;
    else temp=N;
    if(N>=10)
        j=(i*2)/5;
    else if(N<=5)j=1;
    else j=2;
    if(temp%j==0)k=temp/j;
    else k=(temp/j)+1;
    if(k==1)printf("Sheldon");
    else if(k==2)printf("Leonard");
    else if(k==3)printf("Penny");
    else if(k==4)printf("Rajesh");
    else printf("Howard");
    return 0;

}
