#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int m,n,i,j,d=0;
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n&&(i+j)<m;j++)
        {
        if(a[i+j]!=b[j])break;
        }
        if(j==n)++d;
    }
    printf("%d",d);
    return 0;
}
