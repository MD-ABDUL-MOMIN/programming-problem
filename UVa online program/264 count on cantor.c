#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,i,j,num,temp;
    while(scanf("%lld",&N)==1)
    {
        num=sqrt(N);
        temp=N-(num*(num+1))/2;
        num=num+1;
        if(temp==0){
                num-=1;
                if(num%2==0){i=temp+1;j=num;}
                else {i=num;j=temp+1;}
        }
        else{
        if(num%2==0)
        {

            i=temp;
            j=num-temp+1;
        }
        else {
                if(temp>=num){i=temp-num+1;j=num;
            i=num-temp+1;
            j=temp;
        }
        printf("%lld%c%lld\n",i,'/',j);
    }
    return 0;
}
