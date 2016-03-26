#include<stdio.h>

int main()
{
    int i=1,j,k,sum=0,n,p=1,l=1;
    scanf("%d",&n);
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=j;k++){  l*=p;printf("%d ",p); p++;}


            sum+=l;
             l=1;
             }
        i++;
    }
    printf("\n%d",sum);
    return 0;

}


