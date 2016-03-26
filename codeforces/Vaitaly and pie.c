#include<stdio.h>
#include<string.h>
int main()
{
    long int i,j,T,N,k=0,mark[256]={0};
    char ch[200000];
    scanf("%ld",&N);
    getchar();
    gets(ch);
    T=strlen(ch);
    for(i=0;i<T;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        mark[ch[i]]++;
        else
        {
            if(mark[ch[i]-'A'+'a']>0)
            mark[ch[i]-'A'+'a']--;
        else ++k;
        }
    }
    printf("%ld\n",k);
    return 0;
}
