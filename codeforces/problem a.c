#include<stdio.h>
int main()
{
    int m,n,k;

    while(scanf("%d%d",&n,&m)==2)
    {
        k=n;
        while(n>=m)
        {
            k+=(n/m);
           n=n/m+(n%m);
        }
        printf("%d\n",k);
    }
    return 0;
}
