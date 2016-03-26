#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,temp,s;
   scanf("%lld%lld%lld",&a,&b,&s);
   temp=abs(a)+abs(b);
   if((s>temp&&(s-temp)%2==0)||(temp==s))
    printf("Yes\n");
   else printf("No\n");
    return 0;

}
