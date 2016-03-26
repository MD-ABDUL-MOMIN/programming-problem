#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,black=0,white=0,P,Z=0;
    char ch[12][12];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            scanf("%c",&ch[i][j]);
            getchar();
    }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
            if(ch[i][j]=='Q'||ch[i][j]=='q'){Z=9;}
            else  if(ch[i][j]=='R'||ch[i][j]=='r'){Z=5;}
            else  if(ch[i][j]=='B'||ch[i][j]=='b'){Z=3;}
            else  if(ch[i][j]=='N'||ch[i][j]=='n'){Z=3;}
            else  if(ch[i][j]=='P'||ch[i][j]=='p'){Z=1;}
            else  if(ch[i][j]=='K'||ch[i][j]=='k'){Z=0;}
            else {Z=0;}
            if(Z!=0){
            if((ch[i][j]>='a')&&(ch[i][j]<='z'))black+=Z;
            else if((ch[i][j]>='A')&&(ch[i][j]<='Z'))white+=Z;}
            else continue;
    }
}
if(white>black)printf("White\n",white);
else if(white<black)printf("Black\n",black);
else printf("Draw\n");


return 0;
}
