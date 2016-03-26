#include<stdio.h>
int main()
{
    int T,i,j,sum=0,p=0;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%d%d",&i,&j);
        sum-=i;
        sum+=j;
        if(p<sum)p=sum;
    }
    printf("%d",p);
    return 0;
}
