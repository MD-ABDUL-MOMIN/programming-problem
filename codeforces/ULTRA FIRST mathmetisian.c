#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,k,l;
    char ch[101],ch1[101],ch2[101];
    gets(ch);
    gets(ch1);
    l=strlen(ch);
    while(i<l)
    {
        if((ch[i]=='1'&&ch1[i]=='0')||(ch[i]=='0'&&ch1[i]=='1'))
            ch2[i]='1';
        else ch2[i]='0';
        ++i;
    }
   for(j=0;j<i;j++)printf("%c",ch2[j]);
    return 0;
}
