#include<stdio.h>
#include<math.h>
int main()
{
   double N;
   double i,j;
    int T;
    scanf("%d",&T);
    while(T-->0)
    { int p=0;
        scanf("%lf",&N);
        if(N==2)printf("%.0lf is a prime\n",N);
        else {if(fmod(N,2)==0)printf("%.0lf is not a prime\n",N);
        else {
        for(i=3;i<=sqrt(N);i+=2)
        {
            if(fmod(N,i)==0){p=1;break;}
            else {p=0;continue;}
        }
        if(p==0)printf("%.0lf is a prime\n",N);
        else printf("%.0lf is not a prime\n",N);
    }
}
    }
return 0;
}
