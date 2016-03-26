#include<stdio.h>
int main()
{
    int b;
long long int a,x,i,j,sum;
while(scanf("%d%lld",&b,&a)==2)
{
    sum=0;
    for(i=b;;i++)
{
    sum=sum+i;
    if(sum>=a)break;
}
    printf("%lld\n",i);
}
return 0;
}
