#include<stdio.h>
 int m[1000002],n[1000002],sum[1000002];
int main()
{
    long long int N,M,i,j=1;
    scanf("%lld",&N);
    while(N-->0)
    {  if(j!=1)
       printf("\n");
       j=0;

        scanf("%lld",&M);
        for(i=1;i<=M;i++)
            scanf("%d%d",&m[i],&n[i]);
        int p=0;
        for(i=M;i>0;i--)
        {
         sum[i]=(m[i]+n[i]+p)%10;
         p=(m[i]+n[i]+p)/10;
         m[i]=0;
         n[i]=0;
        }
        int k;
        if(p!=0){sum[0]=p;k=0;}
        else k=1;
        for(i=k;i<=M;i++){
            printf("%d",sum[i]);
            sum[i]=0;}
          printf("\n");


    }

    return 0;
}
