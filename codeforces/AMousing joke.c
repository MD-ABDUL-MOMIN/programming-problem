#include<stdio.h>
#include<string.h>
int main()
{
    int F[256],i,j,k=1,L,M,n=1;
    char g[101],h[101],p[101];
    gets(g);
    gets(h);
    gets(p);
    L=strlen(g);
    M=strlen(h);
    j=strlen(p);
    for(i=0;i<256;i++)F[i]=0;
    for(i=0;p[i];i++)F[p[i]]++;
    for(i=0;g[i];i++)
    {if(F[g[i]]>0){
       F[g[i]]--;

        }
        else {k=0;break;}
    }
   for(i=0;h[i];i++)
    { if(F[h[i]]>0)
            {F[h[i]]--;
            }
        else {n=0;break;}
            }

    if(n!=0&&k!=0&&j==(L+M))printf("YES\n");
   else  printf("NO\n");

   return 0;
}
