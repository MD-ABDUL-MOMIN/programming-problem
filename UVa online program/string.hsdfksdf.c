#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,l,k,m=0;
    gets(a);
    gets(b);
    l=strlen(a);
    k=strlen(b);
    i=0;
    while(i<=(k-l))
    {
        j=0;
        while(j<l&&(b[i+j]==a[j]))
        {
            j=j+1;
            if(j=l-1)++m;
        }
        i=i+j;
    }
    printf("%d",m);
    return 0;
}
