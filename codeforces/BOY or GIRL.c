#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,k=0,p=0,sum=0,total;
    char ch[103];
    gets(ch);
    l=strlen(ch);
    for(i='a';i<='z';i++)
    {
        for(j=0;j<l;j++)
        {
            if(i==ch[j]){++k;}
            if(k>1&&j==(l-1))++p;
        }
        if(k>1)sum+=k;
        k=0;
    }
    total=l-sum+p;
    if(total%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}
