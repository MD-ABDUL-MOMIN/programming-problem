#include<stdio.h>
int main()
{
long long int a[4];
int k=0,i,j;
for(i=0;i<4;i++)scanf("%lld",&a[i]);
for(i=0;i<3;i++)
{
    for(j=i+1;j<4;j++)
    {
        if(a[i]==a[j]){++k;break;}
    }
}
printf("%d",k);
return 0;
}
