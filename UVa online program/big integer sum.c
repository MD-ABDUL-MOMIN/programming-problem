#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000],c[10000],d;
    int i,j,e=0;
    gets(a);
    gets(b);
    i=strlen(a);
    while(i>=0)
    {
        d=a[i]+b[i]+e;
        if(d>=56){
            c[i]=d%10;
            e=d/10;}
        else {c[i]=d;e=0;}
        i--;
    }
    for(j=0;j<i;j++)
        printf("%c",c[j]);
    return 0;
}
