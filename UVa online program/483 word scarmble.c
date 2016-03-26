#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m;
    char ch[1000];
    while(gets(ch))
    {
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]==' ')
            {
                k=i;
                j=i-1;

                while(ch[j]!=' '&&ch[j]!='\0')
                {
                    printf("%c",ch[j]);
                   --j;
                }
                printf("%c",ch[k]);
            }

        }
        for(i=l-1;ch[i]!=' '&&i>=0;i--)
            printf("%c",ch[i]);
        printf("\n");
    }
    return 0;
}
