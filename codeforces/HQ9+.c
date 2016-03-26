#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105];
    int i=0,l,p=1;
    gets(ch);
    l=strlen(ch);
    while(i<l)
    {
        if(ch[i]=='H'||ch[i]=='Q'||(ch[i]=='+'&&ch[i-1]=='9')||ch[i]=='9')
           {
            printf("YES");p=0;break;}
            else p=1;
        i++;
    }
    if(p==1)printf("NO");
    return 0;

}
