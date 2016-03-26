#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[100],pig[130];
int i,j=1,k,n=0,l;
gets(a);
l=strlen(a);
//for(i=0;i<l;i++)pig[i]=' ';
for(i=0;i<l;i++)
{
    if(a[i]==' ')++j;
}
printf("%d\n",j);
int count=0;n=0;
for(k=1;k<=j;k++)
{
    while(a[count]!=' ')
        {pig[n]=a[count];
    ++count;
    ++n;
}
    pig[++n]='a';
    pig[++n]=' ';
    n++;
}
puts(pig);
return 0;
}
