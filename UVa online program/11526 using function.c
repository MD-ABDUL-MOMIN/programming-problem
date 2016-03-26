#include<stdio.h>
int main()
{
    int T,i=0;
    scanf("%d",&T);
    long long int a;
    while(i<T)
    {long long int sum=0,j;
        scanf("%lld",&a);
        for(j=1;j<=a;j++)
        {
            sum+=a/j;
        }
        printf("%lld\n",sum);
        i++;
    }

    return 0;
}
