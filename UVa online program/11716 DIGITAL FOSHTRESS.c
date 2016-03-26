#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char TEX[10000];
    int T;
    scanf("%d",&T);
     getchar();
    while(T-->0)
    {
        gets(TEX);
        int L,root,i,j,k=0;
        L=strlen(TEX);
        root=sqrt(L);
        if(root*root==L)
        {int l=0;
            while(l<root)
        {
            for(i=l;i<L;i+=root)
            printf("%c",TEX[i]);
            ++l;
          }

        }
        else printf("INVALID");
    printf("\n");
    }
    return 0;
}
