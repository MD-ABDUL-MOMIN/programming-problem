#include<stdio.h>
int main()
{
    int T,k=1;
    scanf("%d",&T);
    while(k<=T)
    { int x,n,i,j;
    scanf("%d%d",&x,&n);
        printf("Case %d:\n",k);
          for(i=1;i<=n;i++)
        {
           for(j=1;j<=i;j++)
            printf("%d",x);
            printf("\n");
        }
        k++;
    }
    return 0;
}
