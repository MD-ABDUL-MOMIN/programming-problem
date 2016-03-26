#include<stdio.h>
#define LIMIT 1000
int main()
{
    int N;
    int a[LIMIT],b[LIMIT],sum[LIMIT];
    scanf("%d",&N);
    long long int n,i;
    printf("\n");
    while(N-->0)
    {scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d%d",&a[i],&b[i]);
            long long int L=0,m;
            int add=0,p=0;
        for(i=n-1;i>=0;i--)
        {
            add=a[i]+b[i]+p;
            sum[L]=add%10;
            p=add/10;
            ++L;
            if(i==0&&p!=0)sum[L++]=p;
        }
        long long int B=0;
        //printf("\n");
        for(i=n-1;i>=0;i--)
          B=B*10+sum[i];
          printf("%lld",B);
            printf("\n\n");
    }
    return 0;
}
