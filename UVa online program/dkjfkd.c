#include<stdio.h>
#include<string.h>
int main()
{
    char ch[102]="MOMIN";
    int i=0;
    for(i=0;i<10;i++)
    {
        if(ch[i]=='\0')ch[i]=97;
        printf("%c",ch[i]);
    }
    return 0;
}
