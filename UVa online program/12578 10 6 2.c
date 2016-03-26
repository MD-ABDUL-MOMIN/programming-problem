#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    int n,N;
    scanf("%d",&N);
   while(N-->0)
   {double r,l,area;
       scanf("%d",&n);
       r=n*1/5.00;
      l=n*6/10.00;
       area=PI*r*r;
       printf("%.2lf %.2lf\n",area,(n*l)-area);
   }
return 0;
}
