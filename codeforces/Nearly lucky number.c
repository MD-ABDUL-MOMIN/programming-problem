#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
    gets(a);
    int l,j=0,i;
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       if(a[i]=='4'||a[i]=='7')++j;
   }
     if(j==4||j==7)printf("YES");
    else printf("NO");
    return 0;
}
