#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,i=1,n;
    while(scanf("%lld",&n)==1&&n!=0)
    { long long int j,k=1,c,d,e;
        a=pow(n,1/3)+1;
        while(1)
        {d=pow(a,3);
            e=pow(k,3);
            c=d-e;
            printf("\t%lld %lld %lld",d,e,c);
            if(c==n){printf("%lld %lld\n",a,k);break;}
            else if(c>n)k++;
            else {a+=1;k=1;}
            if(a>58){printf("No solution\n");break;}
            }
}

return 0;
}
