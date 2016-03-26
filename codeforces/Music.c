#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,s,q,result,j,k;
    while(scanf("%lld%lld%lld",&n,&s,&q)==3)
    {  result=1;
       double P,S,p,i=0;

         S=(q-1)/(double)q;
         P=(s);
        while(P<=(double)n)
        {
            if(i<=P)
           { P+=S;
           i++;
           }
          else {++result;
            i=0;
            }

        }
        printf("%lld\n",result);
    }
    return 0;
}
