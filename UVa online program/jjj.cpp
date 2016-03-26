#include<stdio.h>
#include<math.h>
int main()
{ int n;
    long long int N,a;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%lld",&N);
        a=sqrt(N);
        if((a*a)==N)printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}
