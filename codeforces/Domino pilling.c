#include<stdio.h>
#include<conio.h>
int main()
{
    int M,N,sum=0,P;
    scanf("%d%d",&M,&N);
    P=M/2;
    sum=P*N;
    if(M%2==1)
        sum+=N/2;
    printf("%d",sum);

    return 0;
}
