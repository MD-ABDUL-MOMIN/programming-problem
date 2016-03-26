#include<stdio.h>
int main()
{
    int n,x[101],y[101],z[101],i,j,sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);

        sum+=x[i];
        sum1+=y[i];
        sum2+=z[i];
    }
   if(sum==0&&sum1==0&&sum2==0)printf("YES\n");
    else printf("NO\n");
    return 0;
}
