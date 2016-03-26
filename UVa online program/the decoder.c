#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    int i,j;
    while(gets(ch))
    {
    j=strlen(ch);
    for(i=0;i<j;i++)
    {
        ch[i]=ch[i]-7;
        printf("%c",ch[i]);
    }
    printf("\n");
    }
    return 0;
}
