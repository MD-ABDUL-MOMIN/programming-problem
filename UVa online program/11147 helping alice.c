#include<stdio.h>
int main()
{

    int t;
   long int n,p,d,N,f;
    scanf("%d",&t);
    while(t>=1)
    {
        scanf("%ld",&n);
        p=(((((n*567)/9)+7492)*235)/47)-498;
        if(p>0)p=p;
        else p=p*(-1);
        N=p/10;
        if(N<=10)
            d=N;
        else
            d=N%10;
        printf("%ld\n",d);
        t--;
    }
    return 0;
}
