#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    { char ch[1000];
        gets(ch);
        int i,j=0,l;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if((ch[i]>='0'&&ch[i]<='9')&&ch[i+1]==' ')
            ++j;
        }
        printf("%d\n",j+1);
    }
    return 0;
}
