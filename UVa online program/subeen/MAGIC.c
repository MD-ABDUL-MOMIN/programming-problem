#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    char word[100];
    scanf("%d",&T);
    getchar();
    while(T-->0)
    {int l,i;
        gets(word);
        l=strlen(word);
        int sum=0,p=0;
        for(i=0;i<l;i++)
        {
            if(word[i]=='1'){sum=sum+1;p=0;}
            else {sum=sum-1;
            if(sum<0){p=1;break;}
            }
         }
         if(p==1)printf("MAGIC\n");
         else printf("NORMAL\n");
}
return 0;
}
