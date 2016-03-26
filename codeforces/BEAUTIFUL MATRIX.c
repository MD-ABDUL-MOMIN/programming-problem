#include<stdio.h>
int main()
{
    int a[6][6],i,j,k,l,sum=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){l=i;k=j;}
    }
}
if(l>=3)sum=l-3;
else sum=3-l;
if(k>=3)sum+=k-3;
else sum+=(3-k);
printf("%d",sum);
return 0;
}
