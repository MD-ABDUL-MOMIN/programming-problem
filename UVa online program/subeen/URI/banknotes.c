#include<stdio.h>
int main()
{
    long int N;int
    temp;
    while(scanf("%ld",&N)==1)
       {temp=N/100;
        printf("%d nota(s) de R$ 100,00\n",temp);
        N=N%100;
        temp=N/50;
        printf("%d nota(s) de R$ 50,00\n",temp);
        N=N%50;
        temp=N/20;
        printf("%d nota(s) de R$ 20,00\n",temp);
        N=N%20;
        temp=N/10;
         printf("%d nota(s) de R$ 10,00\n",temp);
        N=N%10;
        temp=N/5;
        printf("%d nota(s) de R$ 5,00\n",temp);
        N=N%5;
        temp=N/2;
        printf("%d nota(s) de R$ 2,00\n",temp);
        N=N%2;
        temp=N;
        printf("%d nota(s) de R$ 1,00",temp);
       }
    return 0;
}
