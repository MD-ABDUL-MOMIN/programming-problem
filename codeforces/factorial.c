#include<stdio.h>
int main()
{
    long long int a[100000],i,j,k,n,m=1,x,temp=0;
    scanf("%lld",&n);
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=a[j]*i+temp;
            a[j]=x%10;
            temp=x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp=temp/10;
            m++;
        }
    }
    printf("%lld\n",m);
    for(i=m-1;i>=0;i--)
        printf("%lld",a[i]);
    return 0;
}


