#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char b,ch[6]="hello";
    while((b=getchar())!='\n')
    {
        if(b==ch[i])++i;

    }
    if(i==5)printf("YES");
    else printf("NO");
    return 0;
}
