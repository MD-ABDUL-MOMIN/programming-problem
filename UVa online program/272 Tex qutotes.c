#include<stdio.h>
#include<string.h>
int main()
{   char ch[1000000];
int length,i,j=0;
    while(gets(ch))
    {
        length=strlen(ch);
        for(i=0;i<length;i++)
        {if(ch[i]!='"')
        printf("%c",ch[i]);
        else {++j;
            if(j%2==1)printf("%c%c",'`','`');
            else printf("%c%c",'\'','\'');
        }
        }

    printf("\n");
}
return 0;
}
