#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,p,i;
    while(scanf("%lld%lld",&a,&b)==2&&(a!=0&&b!=0))
    {i=0;
    c=sqrt(a);
     while(c*c<=b)
        {
        if(c*c>=a&&c*c<=b)++i;
        c=c+1;
       }
        printf("%lld\n",i);
    }
    return 0;
}
