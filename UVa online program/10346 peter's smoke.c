#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)==2)
    {int d=0,l,a;
    a=n;
        while(n>=k)
        { d=d+(n/k);
          n=(n%k)+(n/k);
        }
        printf("%d\n",(a+d));
    }
    return 0;
}
