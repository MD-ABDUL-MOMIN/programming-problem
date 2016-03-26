#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    int T,l,i;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    {
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='L'){
            str[i]=str[i-1];printf("%c",str[i]);}
            else if(str[i]=='R'){str[i]=str[i+1];printf("%c",str[i]);}
            else printf("%c",str[i]);

    }
    printf("\n");

    }
    return 0;

}
