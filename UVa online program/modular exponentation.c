#include<stdio.h>

int main()
{
    int b,n,m,i,binary[100],p=0,x,power,rem;
    printf("Enter the value of b,n and m \n");
    scanf("%d%d%d",&b,&n,&m);
    int c=n;
    while(n>0)
    {
        rem=n%2;
        binary[p]=rem;
        n=n/2;
       ++p;
    }
    x=1;
    power=b%m;
    for(i=0;i<p;i++)
    {
        if(binary[i]==1)x=(x*power)%m;
        power=(power*power)%m;
    }
    printf("\nThe value of %d %d and %d is %d",b,c,m,x);
    return 0;
}
