#include<stdio.h>
#include<string.h>
int main()
{
    char ch[122];
    gets(ch);
    int l=strlen(ch);
    int i=0,k,j,sum=0,c;
    while(ch[i]!='\0'&&i<l)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
        {j=i+1;
        c=0;sum=0;
          while(ch[j]>='0'&&ch[j]<='9')
          {
              sum+=sum*10+(ch[i]-'0');
              j++;
          }
          for(k=1;k<=sum;k++)printf("%c",ch[i]);
        }
                else continue;
        i=i+j;
    }
}
