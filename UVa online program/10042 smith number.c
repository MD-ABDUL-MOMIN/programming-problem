#include<stdio.h>
#include<math.h>
long long int summation(long long int n);
int main()
{
    int i,d,N;
    long long int m,j,sum,X,p;
   scanf("%d",&N);
    while(N-->0){
            scanf("%lld",&m);
    while(m++){
        sum=0;
       i=summation(m);
       X=m;
       while(m>=sqrt(X))
       {p=m;
           for(j=2;j<=sqrt(m);j++)
           {if(m%j==0){
            sum=sum+summation(j);
            m=m/j;break;
           }
           //else p=m;
        }
        if(p==m){sum+=summation(m);break;

       }
       else
       sum=sum+summation(m);}
    if(sum==i)break;
}
printf("%lld\n",X);
    }
    return 0;
}
long long int summation(long long int n)
{
    long long int sum=0;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;}

        return(sum);
}
