#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int L,i,j,p;
    gets(ch);
    L=strlen(ch);
    for(i=0;i<L;)
    {
        if(ch[i]=='W'&&ch[i+1]=='U'&&ch[i+2]=='B'){
                    i=i+3;
          }
        else{
           j=i+1;
            if(ch[j]=='W'&&ch[j+1]=='U'&&ch[j+2]=='B')
                 printf("%c%c",ch[i],' ');
                 else printf("%c",ch[i]);
        i++;
        }
    }
    return 0;

}
