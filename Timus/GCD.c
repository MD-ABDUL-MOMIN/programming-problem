#include<stdio.h>
int GCD(int a,int b);
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    i=GCD(a,b);
    printf("The greatest common divisor of %d and %d is %d",a,b,i);
    return 0;
}
int GCD(int a,int b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}
