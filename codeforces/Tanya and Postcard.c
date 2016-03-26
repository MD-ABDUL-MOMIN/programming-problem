#include<stdio.h>
#include<string.h>
int main()
{
    char S[200001],T[200001];
   int F[256],i,j,n=0,m=0,r;
    gets(S);
    gets(T);
    for(i=0;i<256;i++)F[i]=0;
    for(i=0;T[i];i++)F[T[i]]++;
    for(i=0;S[i];i++)
    {
        while(F[S[i]]>0)
        {
            n++;
            F[S[i]]--;
            S[i]='.';
        }
    }
    for(i=0;S[i];i++)
    {
        if(S[i]!='.')
        {
            r=(S[i]<='Z')? S[i]-'A'+'a':S[i]-'a'+'A';
           if(F[r]>0)++m;
           F[r]--;
        }
    }
    printf("%d %d\n",n,m);
    return 0;
}
