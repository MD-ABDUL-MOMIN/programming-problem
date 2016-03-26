#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        double N;
        unsigned long int f,i,Y;
        scanf("%lf",&N);
        f=sqrt(N);
        //printf("%")
        if(N==2)printf("%.0lf is a prime\n",N);
        else {
            f=N/2;if(N==f*2)printf("%.0lf is not a prime\n",N);
             else{int k=0;
            for(i=3;i<=f;i+=2)
                {
                    Y=N/i;
                    if(Y*i!=N)continue;
            else {k=1;break;}
                }
            if(k==1)printf("%.0lf is not a prime\n",N);
            else printf("%.0lf is a prime\n",N);
        }
    }
    }
    return 0;
}
