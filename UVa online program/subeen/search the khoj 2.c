#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    { char word[260],text[260];
      int i,j,k=0,last,total,n,l,m=0;
        gets(word);
        total=strlen(word);
       while(word[k]!=' ')k++;
        last=total-k-1;
        for(j=0;j<k;j++)
        {
        if(word[j]==word[k+1])
            {n=0;l=j;
            for(i=k+1;i<total;i++,l++)
            {
              if(word[i]==word[l]){n=0;}
              else {n=1;break;}
            }
            //if(n!=1)++m; khoj 2
            if(n!=1){m=j;break;}
            }
        }
    printf("%d\n",m);
    }
    return 0;
}
