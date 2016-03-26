#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    int T;
    scanf("%d",&T);
    getchar();
    while(T-->0)
    {
        gets(word);
        int L,i=0,l,j=0;
        long long int D=0;
        for(i=0;word[i]!='\n';i++)
            {if((word[i]>='a'&&word[i]<='z')&&word[i+1]!=' ')
            continue;
            else ++j;}
            D=420*(j);
            printf("%lld\n",D);
    }
    return 0;
}
