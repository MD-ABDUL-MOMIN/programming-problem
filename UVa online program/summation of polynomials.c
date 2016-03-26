#include<stdio.h>
#include<math.h>
double summation(double n);
 main()
{
    double num,i,j,m;
    while(scanf("%lf",&num)==1)
    {m=summation(num);
    printf("%.0lf\n",m);
    }
    return 0;
}
k=1;
double sum=0,MO=0;
double summation(double n)
{sum+=pow(n,3);
MO=sum;
    if(n>=1)
    return summation(n-1);
    else{sum=0;return MO;}

}
