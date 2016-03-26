#include<stdio.h>
int num1[1000002];
int num2[1000002];
int sum[1000002];
int main()
{
    int N,l=0;
    scanf("%d",&N);
    while(l<N)
    {
        printf("\n\n");
        long long int i,j,k,n;
     scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&num1[i],&num2[i]);
    }
    int p=0,s;
    for(i=n;i>=1;i--)
    {  s=(num1[i]+num2[i]+p);
       sum[i]=s%10;

        p=s/10;
    }
    sum[0]=p;
    for(i=0;i<=n;i++)
    {
        if(i==0&&p==0)continue;
        printf("%d",sum[i]);
    }
        printf("\n");
        l++;
    }

return 0;
}
