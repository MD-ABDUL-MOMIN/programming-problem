#include<stdio.h>
int main()
{
   while(1)
   {int n,i,j,c,N,sum=0;
   printf("Enter the amount of numbers that is to be sum\n");
   scanf("%d",&n);
   printf("\nEnter %d numbers for sum\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&N);
       sum+=N;
   }
   printf("\nThe sum of numbers is %d\n",sum);
   }
   return 0;
}
