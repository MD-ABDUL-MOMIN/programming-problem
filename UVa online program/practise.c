#include<stdio.h>
int main()
{
    int N,l=0;
    while(scanf("%d",&N)==1)
    while(l<N)
    {
        printf("\n\n");
        long long int i,j,k,n;
     scanf("%lld",&n);
     getchar();
    char num1[1000],num2[1000],sum[10000],c;
    for(i=1;i<=n;i++)
    {
        scanf("%c%c%c",&num1[i],&c,&num2[i]);
        getchar();
    }
    int p=0,s;
      for(i=n;i>=1;i--)
        printf("%c %c\n",num1[i],num2[i]);
    for(i=n;i>=1;i--)
    {   s=(num1[i]+num2[i]-'0'-'0'+p);
    printf("%d\n",s);

       sum[i]=s%10+'0';
       printf("%c\n",sum[i]);

        p=s/10;
    }
    if(p>0)
    {printf("%c",p+'0');}
    for(i=1;i<=n;i++)
        printf("%c",sum[i]);
        printf("\n");
        l++;



    }

return 0;
}
