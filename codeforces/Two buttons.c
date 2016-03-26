#include<stdio.h>
#include<string.h>
int main()
{
    long long int N,M,click=0;
    scanf("%lld%lld",&N,&M);
    if(N>=M)click=N-M;
    else{
          do{if(M%2==0){
          M=M/2;}
          else {M=M+1;}
          ++click;
}
while(M>N);
click+=N-M;
    }
    printf("%lld\n",click);
    return 0;
}

