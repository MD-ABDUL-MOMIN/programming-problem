#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,n;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        char ch[102];
       int  j=0;
            gets(ch);
            int l,sum=0,p=0;
            l=strlen(ch);
            for(j=0;j<l;j++)
            {
               {if((ch[j]=='a')||(ch[j]=='d')||(ch[j]=='g')||(ch[j]=='j')||(ch[j]=='m')||(ch[j]=='p')||(ch[j]=='t')||(ch[j]=='w')||(ch[j]==' '))
                p=1;
                else if((ch[j]=='b')||(ch[j]=='e')||(ch[j]=='h')||(ch[j]=='k')||(ch[j]=='n')||(ch[j]=='q')||(ch[j]=='u')||(ch[j]=='x'))
                    p=2;
                    else if((ch[j]=='c')||(ch[j]=='f')||(ch[j]=='i')||(ch[j]=='l')||(ch[j]=='o')||(ch[j]=='r')||(ch[j]=='v')||(ch[j]=='y'))
                p=3;
                else if(ch[j]=='z'||ch[j]=='s')
                    p=4;
                else p=0;
                }
                sum+=p;
            }
            printf("Case #%d: %d\n",i,sum);
        }
    return 0;
}
