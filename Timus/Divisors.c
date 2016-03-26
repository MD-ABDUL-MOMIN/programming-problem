#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j=2,k=0,SOD=0,divisor[256],num[1000],f;
    double NOD=1,sum=1,d=1,cofactor;
    scanf("%lld",&n);
    int l=0;
    f=n;
    while(n>1)
    { k=0;
        while(n%j==0)
        {
            n=n/j;
            ++k;
        }
        if(k!=0){divisor[l]=j;num[l]=k;l++;}
        j++;
    }
    for(i=0;i<l;i++)
        printf("%lld %lld\n",divisor[i],num[i]);
        for(i=0;i<l;i++)
        {
            sum*=((pow(divisor[i],(num[i]+1))-1)/(divisor[i]-1));
            NOD*=(num[i]+1);
            d*=(((divisor[i]*1.00)-1)/divisor[i]);

        }
        cofactor=d*f;
       printf("the summation of divisor is %0.0lf\nAnd the number of divisor is %0.0lf and cofactor %0.0lf",sum,NOD,cofactor);
    return 0;
}
