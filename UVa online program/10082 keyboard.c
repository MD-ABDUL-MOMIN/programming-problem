#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    while(gets(ch))
    {int l,i;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]>='1'&&ch[i]<='9')
            {
                if(ch[i]=='1')printf("%c",'`');
                else printf("%c",ch[i]-1);
            }

else if(ch[i]=='0')
            printf("%c",'9');
            else if(ch[i]=='W')
                printf("%c",'Q');
                  else if(ch[i]=='E')
                printf("%c",'W');
                 else if(ch[i]=='R')
                printf("%c",'E');
                else if(ch[i]=='T')
                printf("%c",'R');
                else if(ch[i]=='Y')
                printf("%c",'T');
                else if(ch[i]=='T')
                printf("%c",'R');else if(ch[i]=='Y')
                printf("%c",'T');else if(ch[i]=='U')
                printf("%c",'Y');else if(ch[i]=='I')
                printf("%c",'U');else if(ch[i]=='O')
                printf("%c",'I');else if(ch[i]=='P')
                printf("%c",'O');else if(ch[i]=='[')
                printf("%c",'P');else if(ch[i]==']')
                printf("%c",'[');else if(ch[i]=='\\')
                printf("%c",']');else if(ch[i]=='-')
                printf("%c",'0');else if(ch[i]=='=')
                printf("%c",'-');else if(ch[i]=='S')
                printf("%c",'A');else if(ch[i]=='D')
                printf("%c",'S');else if(ch[i]=='F')
                printf("%c",'D');else if(ch[i]=='G')
                printf("%c",'F');else if(ch[i]=='H')
                printf("%c",'G');else if(ch[i]=='J')
                printf("%c",'H');else if(ch[i]=='K')
                printf("%c",'J');else if(ch[i]=='L')
                printf("%c",'K');else if(ch[i]==';')
                printf("%c",'L');else if(ch[i]=='\'')
                printf("%c",';');else if(ch[i]=='X')
                printf("%c",'Z');else if(ch[i]=='C')
                printf("%c",'X');else if(ch[i]=='V')
                printf("%c",'C');else if(ch[i]=='B')
                printf("%c",'V');else if(ch[i]=='N')
                printf("%c",'B');else if(ch[i]=='M')
                printf("%c",'N');else if(ch[i]==',')
                printf("%c",'M');else if(ch[i]=='.')
                printf("%c",',');else if(ch[i]=='/')
                printf("%c",'.');
                else if(ch[i]==' ')printf("%c",ch[i]);
                else printf("%c",ch[i]);


        }
        printf("\n");
    }
    return 0;
}
