#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,s,q,result,j,k;
    while(scanf("%lld%lld%lld",&n,&s,&q)==3)
    {  result=1;
       double P,S,p,i=1;

         S=(q-1)/(double)q;
         P=S+(s);
        while(1)
        {
            if(i<=P)
           {  P+=S;
           if(i==n)break;
               i++;
           }
          else {++result;
            i=1;}

        }
        printf("%lld\n",result);
    }
    return 0;
}
