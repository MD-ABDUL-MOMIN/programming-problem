#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        long long int day;
        scanf("%lld",&day);
        if(day%2==1)printf("blue\n");
        else printf("red\n");
    }
    return 0;
}
