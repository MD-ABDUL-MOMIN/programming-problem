#include<stdio.h>

int main()
{
  int number,rem,signal=1,temp;
  printf("Enter a number to check binary or not : ");
  scanf("%d",&number);
  temp=number;
  while(number>0)
  {
      rem=number%10;
      if(rem!=0&&rem!=1)
       {signal=0;
       break;
       }
       number=number/10;


  }
  if(signal==0)printf("%d is not a binary number\n",temp);
  else printf("%d is a binary number\n",temp);
  return 0;
}
