#include<stdio.h>
int main()
{
    int T;
    long long int num;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%lld",&num);
        int i=0;
       do{
            num=num/10;++i;
        }
        while(num!=0);
        printf("%d\n",i);
    }
    return 0;
}
