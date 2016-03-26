#include<stdio.h>
int A(long long int d);
int main()
{
    long long int a,b,temp,rem,C[12],D[12];
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a==0&&b==0)break;
        if(a<b)
        {
        temp=a;
        a=b;
        b=temp;
        }
        int i=0,j=0,l=0;
        for(i=0;i<15;i++)
        {
            C[i],D[i]=0;
        }
        i=0;
        while(a>0)
        {
            C[i++]=a%10;
            a=a/10;
        }

         while(b>0)
        {
            D[j++]=b%10;
            b=b/10;
        }
        int sum,p=0,carry=0;
        for(l=0;l<i;l++)
        {
            sum=C[l]+D[l]+p;
            if(sum>=10)++carry;
            p=sum/10;
            sum=0;
        }
        if(carry==0)printf("No carry operation.\n");
        else if(carry==1)printf("%d carry operation.\n",carry);
        else printf("%d carry operations.\n",carry);
    }
    return 0;
}
