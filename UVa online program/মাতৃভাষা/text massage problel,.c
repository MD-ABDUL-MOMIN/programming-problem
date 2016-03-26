#include<stdio.h>
#include<conio.h>
int main()
{
    char S[10001];
    int i=1,j,N,l,T;
    scanf("%d",&T);
    getchar();
    while(i<=T)
    {
        gets(S);
        j=0;
        int k=0;
        l=strlen(S);
        printf("Case %d: ",i);
        for(j=0;j<l;j++)
        {
            if(S[j]=='.')
            {
                if(S[j-1]=='1')S[j-1]='.';
                else if(S[j-1]=='2')S[j-1]='a';
                else if(S[j-1]=='3')S[j-1]='d';
                else if(S[j-1]=='4')S[j-1]='g';
                else if(S[j-1]=='5')S[j-1]='j';
                else if(S[j-1]=='6')S[j-1]='m';
                else if(S[j-1]=='7')S[j-1]='p';
                else if(S[j-1]=='8')S[j-1]='t';
                else if(S[j-1]=='9')S[j-1]='w';
                else S[j-1]=' ';
                S[j-1]=S[j-1]+k;
                printf("%c",S[j-1]);
                k=0;
            }
            else {++k;}
        }
        printf("\n");
        i++;
}
    return 0;

}
