#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    while(gets(ch))
    {int l,i;
        l=strlen(ch);
        for(i=0;i<l;i++)
        { if(ch[i]>'1'&&ch[i]<='9')
            {
                if(ch[i]=='2')printf("%c",'`');
                else printf("%c",ch[i]-2);
            }
            else if(ch[i]=='0')printf("%c",'8');
            else if(ch[i]=='-')printf("%c",'9');
            else if(ch[i]=='=')printf("%c",'0');
            else if(ch[i]=='e')
                printf("%c",'q');
                  else if(ch[i]=='r')
                printf("%c",'w');
                 else if(ch[i]=='t')
                printf("%c",'e');
                else if(ch[i]=='y')
                printf("%c",'r');
                else if(ch[i]=='u')
                printf("%c",'t');
                else if(ch[i]=='i')
                printf("%c",'y');else if(ch[i]=='o')
                printf("%c",'u');else if(ch[i]=='p')
                printf("%c",'i');else if(ch[i]=='[')
                printf("%c",'o');else if(ch[i]==']')
                printf("%c",'p'); else if(ch[i]=='d')
                printf("%c",'a'); else if(ch[i]=='f')
                printf("%c",'s');else if(ch[i]=='g')
                printf("%c",'d');else if(ch[i]=='h')
                printf("%c",'f');else if(ch[i]=='j')
                printf("%c",'g');else if(ch[i]=='k')
                printf("%c",'h');else if(ch[i]=='l')
                printf("%c",'j');else if(ch[i]==';')
                printf("%c",'k');else if(ch[i]=='\'')
                printf("%c",'l');else if(ch[i]=='\\')
                printf("%c",';'); else if(ch[i]=='c')
                printf("%c",'z');else if(ch[i]=='v')
                printf("%c",'x');else if(ch[i]=='b')
                printf("%c",'c');else if(ch[i]=='n')
                printf("%c",'v');else if(ch[i]=='m')
                printf("%c",'b');else if(ch[i]==',')
                printf("%c",'n');else if(ch[i]=='.')
                printf("%c",'m');else if(ch[i]=='/')
                printf("%c",',');
                else if(ch[i]==' ')printf("%c",ch[i]);
                else printf("%c",ch[i]);


        }
        printf("\n");
    }
    return 0;
}
