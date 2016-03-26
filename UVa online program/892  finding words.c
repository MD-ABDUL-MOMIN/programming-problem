#include<stdio.h>
#include<string.h>
int main()
{int a,ik;
    char ch[60];
    while(gets(ch)!='EOL')
    {a=strlen(ch);
    if(a==1&&ch[0]=='#')break;
    for(i=0;i<a;i++)
    {
        if((toupper(ch[i])<'A'||toupper(ch[i])>='Z')&&(ch[i]!='-'&&ch[i]!=' '&&ch[i]!='\n'))
           continue;
        else {k=0;
                if(ch[i]=='-')
                {for(k=i;ch[i]!='\0';k--);
                printf("\n");
                printf("")
                }
                else
        printf("%c",ch[i]);}
    }
    printf("\n");
    }
        return 0;


    }
