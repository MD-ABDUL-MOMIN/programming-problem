#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1004];
    int i,l;
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(i==0)
        {
            if(ch[i]>='a'&&ch[i]<='z')ch[i]=ch[i]-'a'+'A';
            printf("%c",ch[i]);
        }
        else printf("%c",ch[i]);
    }
    return 0;

}
