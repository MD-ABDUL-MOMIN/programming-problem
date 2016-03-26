#include<stdio.h>
#include<string.h>
int main()
{
    char c[30];
    int i,l;
    while(gets(c))
    {
       l=strlen(c);
       for(i=0;i<l;i++)
       {
           if(c[i]>='A'&&c[i]<='C')printf("%c",'2');
           else if(c[i]>='D'&&c[i]<='F')printf("%c",'3');
           else if(c[i]>='G'&&c[i]<='I')printf("%c",'4');
           else if(c[i]>='J'&&c[i]<='L')printf("%c",'5');
           else if(c[i]>='M'&&c[i]<='O')printf("%c",'6');
           else if(c[i]>='P'&&c[i]<='S')printf("%c",'7');
           else if(c[i]>='T'&&c[i]<='V')printf("%c",'8');
           else if(c[i]>='W'&&c[i]<='Z')printf("%c",'9');
           else printf("%c",c[i]);
       }
       printf("\n");
    }
    return 0;

}
