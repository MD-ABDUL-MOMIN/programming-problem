#include<stdio.h>
#include<string.h>
int main()
{
    char ch[6]="heavy",ch1[6]="metal",M[10000];
    long long int H,i,j=0,k=0,d=0,e=0;
    scanf("%s",&M);
    H=strlen(M);
    for(i=0;i<H;i++)
    {
        if(M[i]==ch[j]||M[i]==ch[j=0])
            if(++j==5)
            ++d,j=0;
        if(M[i]==ch1[k]||M[i]==ch1[k=0])
            if(++k==5)e+=d,j=0;

    }
    printf("%lld\n",e);
    return 0;

}
