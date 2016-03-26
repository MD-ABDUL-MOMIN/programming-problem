#include<stdio.h>
#include<math.h>
int main()
{
   char num[20];
   int i,j,l;
   gets(num);
   l=strlen(num);
   for(i=0;i<l;i++)
   {
      j=num[i]-'0';
      if(j>4){if(j==9&&i==0)num[i]=j+'0';
      else num[i]=9-j+'0';}
      else num[i]=j+'0';
   }
   printf("%s\n",num);
   return 0;
}
