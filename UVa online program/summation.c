#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=a+~b-1;
    printf("The summation of a and b is %d",sum);
    return 0;
}
