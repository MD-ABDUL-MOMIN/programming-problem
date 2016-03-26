#include<stdio.h>
int main()
{
    int T,x,y,a,b,c,d;
    scanf("%d",&T);
    while(T-->0)
    {int e=-1,f=-1;
        scanf("%d%d",&a,&b);
         x=a/10;
         y=a%10;
         if(x==(b/10))e=x;
         if(x==(b%10))e=x;
         if(y==(b/10))f=y;
         if(y==(b%10))f=y;
          if(e==-1&&f==-1)printf("%c\n",'N');
          else if(e==-1&&f!=-1)printf("%d\n",f);
          else if(e==f&&e!=-1)printf("%d\n",e);
          else if(e!=-1&&f==-1)printf("%d\n",e);
          else if(e>f&&f!=-1)printf("%d%d\n",f,e);
          else printf("%d%d\n",e,f);

        }
        return 0;
    }

