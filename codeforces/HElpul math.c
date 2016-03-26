#include<stdio.h>
int main()
{
    char ch[105];
    int i,key,l,j=0,A[105],L;
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
        {
            A[j]=(ch[i]-'0');j++;
        }

    }
    L=j;
    for(i=1;i<L;i++)
    { key=A[i];
    j=i-1;
    while(j>=0&&A[j]>key)
    {
        A[j+1]=A[j];
        j=j-1;
        A[j+1]=key;
    }}
    for(i=0;i<L;i++)
    {
        A[i]=A[i]+'0';
       if(i<(L-1))
       {
       printf("%c%c",A[i],'+');}
       else printf("%c",A[i]);
    }
    return 0;

    }

