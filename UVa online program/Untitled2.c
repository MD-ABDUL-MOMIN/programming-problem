#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,j,n,l;
    gets(ch);
    printf("\n");
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        printf("%c",ch[i]);
        for(j=0;j<10000000;j++);
    }
    return 0;
}
