#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,l,sum=0,T;
    char ch[60];
    scanf("%d",&T);
    getchar();
    for(i=0;i<T;i++)
    scanf("%c",&ch[i]);
    i=0;
    j=0;
    while(i<T)
    {j=0;
    if(ch[i]=='R'&&ch[i+1]=='R'){++j;}
    else if(ch[i]=='G'&&ch[i+1]=='G'){++j;}
    else if(ch[i]=='B'&&ch[i+1]=='B'){++j;}
    sum+=j;
    i++;
    }
    printf("%d",sum);
    return 0;
}
