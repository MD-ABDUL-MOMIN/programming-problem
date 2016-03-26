#include<stdio.h>
#include<string.h>
int main()
{
    char ch[12],ch1[12];
    int d;
    scanf("%s%s",&ch,&ch1);
    d=strcmp(ch,ch1);
    printf("%d",d);
    return 0;

}
