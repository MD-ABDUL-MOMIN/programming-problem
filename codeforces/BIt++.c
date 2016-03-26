#include<stdio.h>
#include<string.h>
int main()
{
    char ch[4];
    int T,X=0;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%s",&ch);
        if((ch[0]=='X'&&ch[1]=='+')&&ch[2]=='+')X++;
        else if(ch[0]=='X'&&ch[1]=='-'&&ch[2]=='-')X--;
        else if(ch[0]=='+'&&ch[1]=='+'&&ch[2]=='X')++X;
        else --X;
    }
    printf("%d",X);
    return 0;

}

