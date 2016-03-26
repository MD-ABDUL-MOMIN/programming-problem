#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    { int l,L=0,i,p;
        char ch[160];
        gets(ch);
         l=strlen(ch);
        // p=l-1;
        l=l-1;
        int k=0;
         while(l>=0)
         {
             if(ch[l]==' ')
             { p=l;
                 for(i=p+1;i<=(p+k);i++)
                    printf("%c",ch[i]);
                    printf("%c",ch[p]);
                    k=0;
             }
             else ++k;
             if(l==0)for(i=0;i<k;i++)printf("%c",ch[i]);
                l--;
    }
    printf("\n");
    }
    return 0;
}
