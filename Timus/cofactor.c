#include<stdio.h>
int main()
{
    int i,n,j,k,pri[100001],mark[100001];
    scanf("%d",&n);
    for(i=1;i<=n;i++)pri[i]=i;
    pri[1]=1;
    mark[1]=1;
    for(i=2;i<=n;i+=2)
    {
        if(i!=2)mark[i]=1;
        pri[i]=pri[i]/2;
    }
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            pri[i]=pri[i]-1;
            for(j=i*2;j<=n;j+=i)
            {
                mark[j]=1;
                pri[j]=pri[j]/i*(i-1);
            }
        }
    }
    for(i=1;i<=n;i++)
  if(!mark[i])printf("%d ",pri[i]);
    return 0;
}
