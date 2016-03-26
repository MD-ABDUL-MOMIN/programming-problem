#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    { int L,i;
        gets(word);
        L=strlen(word);
        int j=1,p=0;
        long long int D=0;
        for(i=0;i<L;i++)
        {
            if((word[i]>='a'&&word[i]<='z')||word[i]=='.')
            {
              continue;
            }
            else if(word[i]=' '&&word[i+1]!=' ')++j;
        }
        D=j*420;
        printf("%lld\n",D);
    }
    return 0;
}
